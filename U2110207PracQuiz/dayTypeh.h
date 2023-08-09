#ifndef DAYTYPE_H
#define DAYTYPE_H


#include <iostream>
#include <string>


using namespace std;

class dayType
{
private:
    string Wdays[8];
    int i = 0;
    string day;
    string prDay;
    string NxtDay;
    string AddDays;
public:


    dayType()
    {
        day = "Unknown";
        Wdays[0] = "Null";
        Wdays[1] = "Monday";
        Wdays[2] = "Tuesday";
        Wdays[3] = "Wednesday";
        Wdays[4] = "Thursday";
        Wdays[5] = "Friday";
        Wdays[6] = "Saturday";
        Wdays[7] = "Sunday";
    }
    dayType(string d)
    {
        day = d;
        Wdays[0] = "Null";
        Wdays[1] = "Monday";
        Wdays[2] = "Tuesday";
        Wdays[3] = "Wednesday";
        Wdays[4] = "Thursday";
        Wdays[5] = "Friday";
        Wdays[6] = "Saturday";
        Wdays[7] = "Sunday";
    };
    ~dayType() {};
    string setday(string days)
    {

        for (auto& element : Wdays)
        {

            if (element == days)
            {
                this->day = Wdays[i];
            return "0"; }
            i += 1;

        }
        return "0";

    }
    string preday()
    {
        if (i < 7 && i >= 0)
        {
            cout << "Previous day : " << Wdays[i - 1] << endl;
        }
        return "0";
    }
    void Nextday()
    {
        if (i == 6)
        {
            cout << "Next day : " << Wdays[0] << endl;
        }
        else
        {
            cout << "Next day : " << Wdays[i + 1] << endl;
        }
    }
    int add(int n)
    {
        if ((i + n) <= 7)
        {
            cout << " That day is : " << Wdays[i + n] << endl;
        }
        else
        {
            int difference;

            difference = (i + n) / 7;
            difference *= 7;
            n = (i + n) - difference;
            return add(n -1);

        }
        return 0;
    }

    void print()
    {
        cout << "Day is : " << day;
    }

};

#endif
