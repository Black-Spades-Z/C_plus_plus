#pragma once

#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
	int code;
	string name;

public:
	Person() {};
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

class Admin : virtual public Person
{
private:
	int experience;

public:
	void setExperince(int exp)
	{
		experience = exp;
	}
	void getExperience()
	{
		cout << "Experience : " << experience << endl;
	}
};

class Account : virtual public Person
{
private:
	int pay;

public:
	Account() {};
	void setPay(int pay)
	{
		this->pay = pay;
	}
	void getPay()
	{
		cout << "Pay : " << pay << endl;
	}
};

class Master : virtual public Account, virtual public Admin
{
public:
	Master() {};
};
