#include <iostream>
#include <string>
#include "Hierarchy.h"
#include "Institute.h"



using namespace std;


int main()
{
    int index, number, code, salary, publication, monthlySalary, dailySalary, speed, pay, exp;
    string name, subject;
    char grade;
    Education education;
    Casual casual;
    Regular regular;

Task1:

    system("CLS");
    cout << "\t\tTask 1\n\n";
    cout << "\t1) Set name\n\t2) Set code\n\t3) Set grade\n\t4) Set subject\n\t5) Set monthly salary";
    cout << "\n\t6) Set daily salary\n\t7) Set speed\n\t8) Show all data\n\t0) Exit\n";
    cout << "Index : ";
    cin >> index;
    switch (index)
    {

    case 0:
    {
        break;
    }
    case 1:
    {
        cout << "Name : ";
        cin >> name;
        education.setName(name);

        cin.clear();
        cin.ignore(32767, '\n');
        cin.get();
        goto Task1;
        break;
    }
    case 2:
    {
        cout << "Code : ";
        cin >> code;
        education.setCode(code);

        cin.clear();
        cin.ignore(32767, '\n');
        cin.get();
        goto Task1;
        break;
    }
    case 3:
    {
        cout << "Grade : ";
        cin >> grade;
        education.setGrade(grade);

        cin.clear();
        cin.ignore(32767, '\n');
        cin.get();
        goto Task1;
        break;
    }
    case 4:
    {
        cout << "Subject :";
        cin >> subject;
        education.setSubject(subject);

        cin.clear();
        cin.ignore(32767, '\n');
        cin.get();
        goto Task1;
        break;
    }

    case 5:
    {
        cout << "Monthly salary : ";
        cin >> monthlySalary;
        regular.setMonthlySalary(monthlySalary);

        cin.clear();
        cin.ignore(32767, '\n');
        cin.get();
        goto Task1;
        break;
    }
    case 6:
    {
        cout << "Daily Salary : ";
        cin >> dailySalary;
        casual.setDailySalary(dailySalary);

        cin.clear();
        cin.ignore(32767, '\n');
        cin.get();
        goto Task1;
        break;
    }
    case 7:
    {
        cout << "Speed : ";
        cin >> speed;
        casual.setSpeed(speed);

        cin.clear();
        cin.ignore(32767, '\n');
        cin.get();
        goto Task1;
        break;
    }
    case 8:
    {
        education.getName();
        education.getcode();
        education.getPublication();
        education.getQualification();
        education.getSubject();
        casual.getSpeed();
        casual.getDailySalary();
        regular.getMonthlySalary();

        cin.clear();
        cin.ignore(32767, '\n');
        cin.get();
        goto Task1;
        break;
    }


    default:
        break;
    }

    Master master;
    Task2:
    cout << "\t\tTask 2\n\n";

    cout << "\t1) Set the name.\n\t2) Set the code.\n\t3) Set the pay.\n\t4) Set the experience.\n\t5) Show all data\n\t0) Exit\n";
    cout << "Index :";
    cin >> number;
    switch (number)
    {
    case 0:
    {
        break;
    }
    case 1:
    {
        cout << "Enter the name : ";
        cin >> name;
        master.setName(name);
        goto Task2;
        break;
    }
    case 2:
    {
        cout << "Enter the code : ";
        cin >> code;
        master.setCode(code);
        goto Task2;
        break;
    }
    case 3:
    {
        cout << "Enter the pay : ";
        cin >> pay;
        master.setPay(pay);
        goto Task2;
        break;
    }
    case 4:
    {
        cout << "Enter the experience : ";
        cin >> exp;
        master.setExperince(exp);
        goto Task2;
        break;
    }
    case 5:
    {
        master.getName();
        master.getcode();
        master.getPay();
        master.getExperience();
        cin.clear();
        cin.ignore(32767, '\n');
        cin.get();
        goto Task2;
        break;
    }

    default:
    {
        cout << "There is no such an option T_T" << endl;
        cin.get();
        goto Task2;
        break;
    }
    }


    cin.clear();
    cin.ignore(32767, '\n');
    cin.get();
    return 0;
}