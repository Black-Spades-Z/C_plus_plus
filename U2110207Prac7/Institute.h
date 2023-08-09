#pragma once

#include <iostream>
#include <string>

using namespace std;


class Staff
{
private:
	int code;
	string name;

public:
	Staff() {};
	void setCode(int code)
	{
		this->code = code;
	}
	void getcode()
	{
		cout << "Code : " << code << endl;
	}
	void setName(string name)
	{
		this->name = name;
	}
	void getName()
	{
		cout << "Name : " << name << endl;
	}
};

class Officer : virtual public Staff
{
private:
	char grade;
public:
	Officer() {};
	void setGrade(char grade)
	{
		this->grade = grade;
	}
	void getGrade()
	{
		cout << "Grade : " << grade << endl;
	}

};

class Teacher : virtual public Staff
{
private:
	string subject;
	int publication;

public:
	Teacher() {};
	void setSubject(string subject)
	{
		this->subject = subject;
	}
	void getSubject()
	{
		cout << "Subject : " << subject << endl;
	}
	void setPublication(int pub)
	{
		publication = pub;
	}
	void getPublication()
	{
		cout << "Publication : " << publication << endl;
	}
};

class Typer : virtual public Staff
{
private:
	int speed;

public:
	void setSpeed(int speed)
	{
		this->speed = speed;
	}

	void getSpeed()
	{
		cout << "Speed : " << speed << endl;
	}
};

class Regular : public Typer
{
private:
	int monthlySalary;

public:
	void setMonthlySalary(int salary)
	{
		monthlySalary = salary;
	}
	void getMonthlySalary()
	{
		cout << "Monthly salary : " << monthlySalary << endl;
	}
};

class Casual : public Typer
{
private:
	int dailysalary;

public:
	void setDailySalary(int salary)
	{
		dailysalary = salary;
	}
	void getDailySalary()
	{
		cout << "Daily salary : " << dailysalary << endl;

	}
};


class Education : virtual public Teacher, virtual public Officer
{
private:
	string qualification;

public:
	Education() {};
	void setQualification(string qualification)
	{
		this->qualification = qualification;
	}

	void getQualification()
	{
		cout << "Qualification : " << qualification << endl;

	}
};
