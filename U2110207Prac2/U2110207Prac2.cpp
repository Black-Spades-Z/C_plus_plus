/*
Name : Azizdek Muminjonov
Id: U2110207
Project : Practical Lab Assignment 2
*/

#include <iostream>	
#include <string>;
#include "Triangle.h"

using namespace std;

class Person 
{
private:
	int age;
	string name;

public:
	Person() 
	{
		age = 17;
		name = "Unknown";
	}
	Person(string n, int a = 10)
	{
		age = a;
		name = n;
	}
	void Display()
	{
		cout << "Age  : " << age  << endl;
		cout << "Name : " << name << endl;
	}


};

class Records
{
public:
	string name;
	float salary;
	string date_of_birth;
public :
	Records()
	{
		name = "Unknown";
		salary = 0;
		date_of_birth = "Unknown";
	}
	Records(string n, string date, float s)
	{
		name = n;
		salary = s;
		date_of_birth = date;
	}
	void setData(string n, string date, float s)
	{

		name = n;
		salary = s;
		date_of_birth = date;
	}
	void getData()
	{
		cout << "Name : " << name << endl;
		cout << "Salary : " << salary << endl;
		cout << "Date of birth : " << date_of_birth << endl;
	}
};

class Account
{
private:
	string name, accountNumber;
	float balance;

public:
	Account() 
	{
		cout << "Object is created\n\n";
		name = "Unlnown";
		accountNumber = "No";
		balance = 0;
	}
	Account(string n, string an, float b)
	{
		cout << "Object is created\n\n";
		name = n;
		accountNumber = an;
		balance = b;
	}
	~Account()
	{
		cout << "Object is destroyed\n";
	};
	void getData()
	{
		cout << "Name : " << name << endl;
		cout << "Bank Account number : " << accountNumber << endl;
		cout << "Balance : " << balance << " $" << endl;
	}

};

// Class Triangle

void Triangle::setBase(double b) 
{
	Base = b;
}
void Triangle::getBase()
{
	cout << "\tBase   : " << Base << endl;
}
void Triangle::setHeight(double h)
{
	Height = h;
}
void Triangle::getHeight()
{
	cout << "\tHeight : " << Height << endl;
}
void Triangle::getArea()
{
	cout << "Area : " << 0.5 * Height * Base << endl;
}
void Triangle::getPerimeter()
{	
	cout << "Perimeter : " << "is unknown (no angle or third side). " << endl;
}
void Triangle::getPerimeter(double thirdSide)
{
	cout << "Perimeter : " << Height + Base + thirdSide << endl;
}



class Box
{
private:
	double width;
public:
	Box()
	{
		width = 0;
	}
	~Box() {};
	void set(double w)
	{
		width = w;
	}
	friend void get(Box &box);
};

void get(Box &box)
{
	cout << "Width is " << box.width << endl;
}

int main()
{
	cout << "Task 1" << endl;
	Records a, * p;
	a.setData("Aziz", "23:03:2004", 20000.02);
	p = &a;
	p->getData();
	cin.clear();
	cout << "\n\nPress enter";
	cin.ignore(32767, '\n');
	



	cout << "\x1B[2J\x1B[H";
	cout << "Task 4" << endl;
	int x,angle;
	double height,base,thirdSide;
	Triangle triangle;

	cout << "This program is to calculate Area and Perimeter of Triangle." << endl << endl;
Start:
	cout << "Menu:\n";
	cout << "\t1) Set Height\n\t2) Set Base\n\t3) Get Data\n\t4) Get Area" << endl;
	cout << "\t5) Get Perimeter\n\t6) Get Perimeter (have third side)" << endl;

	cout << "\nIndex : ";
	cin >> x;
	switch (x)
	{
	case 1:
	{
		cout << "Set height : ";
		cin >> height;
		triangle.setHeight(height);
		cout << "\x1B[2J\x1B[H";
		break;
		
	}
	case 2:
	{
		cout << "Set base : ";
		cin >> base;
		triangle.setBase(base);
		cout << "\x1B[2J\x1B[H";
		break;
	}
	case 3:
	{
		cout << "\x1B[2J\x1B[H";
		cout << "Data: \n\n" << endl;
		triangle.getHeight();
		triangle.getBase();
		cin.clear();
		cout << "\n\nPress enter";
		cin.ignore(32767, '\n');
		cin.get();
		cout << "\x1B[2J\x1B[H";
		break;
	}
	case 4:
	{
		triangle.getArea();
		goto End;
		break;
	}
	case 5:
	{
		triangle.getPerimeter();
		goto End;
		break;
	}
	case 6:
	{
		cout << "Set third side : ";
		cin >> thirdSide;
		triangle.getPerimeter(thirdSide);
		goto End;
		break;
	}
	}
	goto Start;
End:
	cin.clear();
	cout << "\n\nPress enter";
	cin.ignore(32767, '\n');
	cin.get();

	cout << "\x1B[2J\x1B[H";
	cout << "Task 5\n\n" << endl;
	Box box;
	cout << "Set width : ";
	cin >> x;
	box.set(x);
	get(box);




	cin.clear();
	cout << "\n\nPress enter";
	cin.ignore(32767, '\n');
	cin.get();

	return 0;
}