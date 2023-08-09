/*
Name   : Azizdek Muminjonov
ID     : U2110207
Project: Practical Assignment 1

Please run to check design ^_^
*/

#include <iostream>
#include <string>

using namespace std;

// Task 1

/*
class Student 
{
private:
	string Student_ID, Student_Name;
	double OOP2_Score, Maths_Score, English_Score, Total_Score;
	double ctotal() 
	{
		Total_Score = OOP2_Score + Maths_Score + English_Score;
		return Total_Score;
	}

public:
	void Takedata(string ID, string Name, double OOP2, double Maths, double English)
	{
		Student_ID = ID;
		Student_Name = Name;
		OOP2_Score = OOP2;
		Maths_Score = Maths;
		English_Score = English;
		ctotal();
	}
	void Showdata()
	{
		cout << "Student's ID   : "<<Student_ID<<endl;
		cout << "Student's Name : "<<Student_Name<<endl;
		cout << "Student's OOP2 Score    : "<<OOP2_Score<<endl;
		cout << "Student's Maths Score   : "<<Maths_Score<<endl;
		cout << "Student's English Score : "<<English_Score<<endl;
		cout << "Student's Total Score   : "<<Total_Score<< endl;
	}
};
*/

// Task 2

class Employee
{
private:
	string Employee_ID, Employee_Name;
	int No_of_Hours, Rate_per_Hour;

public:
	void setEmployee_ID(string ID);
	string getEmployee_ID();
	void setEmployee_Name(string name);
	string getEmployee_Name();
	void setHours(int hours);
	int getHours();
	void setRate(int rate);
	int getRate();
	double getTotal_Mounthly_Salary();

};

void Employee::setEmployee_ID(string ID)
{
	Employee_ID = ID;
}

string Employee::getEmployee_ID()
{
	cout << "Employee's ID : " << Employee_ID << endl;
	return Employee_ID;
}

void Employee::setEmployee_Name(string name)
{
	Employee_Name = name;
}

string Employee::getEmployee_Name()
{
	cout << "Employee's Name : " << Employee_Name << endl;
	return Employee_Name;
}

void Employee::setHours(int hours)
{
	No_of_Hours = hours;
}

int Employee::getHours()
{
	cout << "Employee's number of hours : " << No_of_Hours << endl;
	return No_of_Hours;
}

void Employee::setRate(int rate)
{
	Rate_per_Hour = rate;
}

int Employee::getRate()
{
	cout << "Employee's rates per hours : " << Rate_per_Hour << endl;
	return Rate_per_Hour;
}

double Employee::getTotal_Mounthly_Salary()
{
	double Total = Rate_per_Hour * No_of_Hours * 30;
	cout << "Total salary : " << Total << endl;
	return Total;
}

// Task 3

class Student
{
private:
	string Student_ID, Student_Name;
	double OOP2_Score, Maths_Score, English_Score;

public:
	void setStudent_ID(string id)
	{
		Student_ID = id;
	}
	string getStudent_ID()
	{
		cout << "Student's ID : " << Student_ID << endl;
		return Student_ID;
	}
	void setStudent_Name(string name)
	{
		Student_Name = name;
	}
	string getStudent_Name()
	{
		cout << "Student's Name : " << Student_Name << endl;
		return Student_Name;
	}
	void setOOP2_Score(double score)
	{
		OOP2_Score = score;
	}
	double getOOP2_Score()
	{
		cout << "OOP2 score is : " << OOP2_Score << endl;
		return OOP2_Score;
	}
	void setMaths_Score(double score)
	{
		Maths_Score = score;
	}
	double getMaths_Score()
	{
		cout << "Maths score is : " << Maths_Score << endl;
		return Maths_Score;
	}
	void setEnglish_Score(double score)
	{
		English_Score = score;
	}
	double getEnglish_Score()
	{
		cout << "English score is : " << English_Score << endl;
		return English_Score;
	}
	double getAverage_Score()
	{
		double average = (OOP2_Score + Maths_Score + English_Score) / 3;
		cout << "Average Score : " << average << endl;
		return average;
	}
	double getTotal_Score()
	{
		double total = OOP2_Score + Maths_Score + English_Score;
		cout << "Total Score : " << total << endl;
		return total;
	}
};

// Main function
int main()
{
	string name, id;
	string subs[3] = { "OOP2", "Maths", "English" };
	int hours, rate;
	double scores[3];

	Student azi;
	Employee aziz;


	// Task 2


	cout << "\tTask 2\n\n" << endl;
	cout << "Please enter your id : ";
	cin >> id;
	cout << "Please enter your name : ";
	cin >> name;
	
	cout << "Please enter hours : ";
	cin >> hours;
	cout << "Please enter rate  : ";
	cin >> rate;
	cout << endl;
	aziz.setEmployee_ID(id);
	aziz.getEmployee_ID();
	aziz.setEmployee_Name(name);
	aziz.getEmployee_Name();
	aziz.setHours(hours);
	aziz.getHours();
	aziz.setRate(rate);
	aziz.getRate();
	aziz.getTotal_Mounthly_Salary();
	system("pause");
	cout << "\x1B[2J\x1B[H" << endl;


	// Task 3


	cout << "\tTask 3\n\n" << endl;
	cout << "Please enter your id : ";
	cin >> id;
	cout << "Please enter your name : ";
	cin >> name;
	for (int i = 0; i < 3; i++)
	{
		cout << "Score for " << subs[i] << " : ";
		cin >> scores[i];
	}
	
	cout << endl;
	azi.setStudent_ID(id);
	azi.getStudent_ID();
	azi.setStudent_Name(name);
	azi.getStudent_Name();
	azi.setOOP2_Score(scores[0]);
	azi.getOOP2_Score();
	azi.setMaths_Score(scores[1]);
	azi.getMaths_Score();
	azi.setEnglish_Score(scores[2]);
	azi.getEnglish_Score();
	azi.getAverage_Score();
	azi.getTotal_Score();



	cin.clear();
	cin.ignore(32767, '\n');
	cin.get();
	
	return 0;
}