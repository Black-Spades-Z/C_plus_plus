#pragma once
#ifndef ACCOUNT.H


#include <iostream>
#include <string>

using namespace std;



class Account
{
private:
    string name;
    string accnumber;
    string acctype;
    int penalty = 2;

protected:
    float ammount;

public:
    Account()
    {
        name = "Unknown";
        accnumber = "Unknown";
        acctype = "Unknown";
        ammount = 0;
    };

    float Deposit(float deposit)
    {
        return ammount + deposit;
    }
    void Balance()
    {

        cout << "Balance : " << ammount << endl;
    }

    void setName(string name)
    {
        this->name = name;
    }

    string getName()
    {
        cout << "Name : " << name << endl;
        return name;
    }
    void setAccnumber(string number)
    {
        accnumber = number;
    }
    string getAccnumber()
    {
        cout << "Account number : " << accnumber << endl;
        return accnumber;
    }
    void setAcctype(string type)
    {
        acctype = type;
    }
    string getAcctype()
    {
        cout << "Account type : " << acctype << endl;
        return acctype;
    }

    float Withdraw(float withdraw)
    {
        if (withdraw > ammount)
        {
            cout << "Not enough amount of money T_T" << endl;
        }
        else if (withdraw < ammount)
        {
            if ((withdraw + 2) <= ammount)
            {
                if ((ammount - withdraw) < 1000)
                {
                    cout << "There will be penalty T_T" << endl;
                    Penalty();
                    ammount -= withdraw;
                    Balance();
                }
                else
                {
                    ammount -= withdraw;
                    Balance();
                }
            }

            else
            {
                cout << "Your balance is : " << ammount << " you are not allowed to wihdraw all, there must left at least 2 $." << endl;
            }
        }
        else
        {
            cout << "Not enough money T_T" << endl;
            Balance();
        }
        return ammount;
    }
    float Penalty()
    {
        return ammount -= penalty;
    }
};

class Curr_Acct : public Account
{
public:
    Curr_Acct()
    {
    };
};

class Sav_Acct : public Account
{
private:
    float interest;
public:
    Sav_Acct()
    {

    }
    void Compute_Interest(int months)
    {
        interest = ammount * 0.04;
        cout << "Interest after how many months : ";
        cin >> months;
        cout << "Interest after " << months << " months : " << ((ammount + interest) / 12) * months;
        Balance();
    }
};





































#endif