/*
Name  : Azizbek Muminjonov
ID    : U2110207
Project : Practica Lab Assignment 4
*/

#include <iostream>
#include <string>

using namespace std;



class DayTime
{
private:
	int	hour, minute, second;

public:
	DayTime(int hour, int minute, int second)
	{
		if (second > 60)
		{
			int avarage = second / 60;
			minute += avarage;
			second = second - (avarage * 60);
		}
		else
		{
			this->second = second;
		}
		if (minute > 60)
		{
			int avarage = minute / 60;
			hour += avarage;
			minute = minute - (avarage * 60);
		}
		else
		{
			this->minute = minute;
		}
		if (hour > 24) 
		{
			cout << "Hours are more than 24.\nHours = 0, until you try again" << endl;
		}
		else 
		{
			this->hour = hour;
		}
	}
	~DayTime() {};
	int getHour() const
	{
		return hour;
	}
	int getMinute() const
	{
		return minute;
	}
	int getSecond() const
	{
		return second;
	}
	int asSecond() const
	{
		cout << "Overall seconds : " << (hour * 3600) + (minute * 60) + second << endl;;
		return 0;
	}

	DayTime operator++(int) {
		DayTime daytime(*this);
		second += 1;
		return daytime;
	};
	DayTime operator--(int)
	{
		DayTime daytime(*this);
		minute -= 1;
		return daytime;
	}
};


class Dollars
{
private:
	float currency, soums, euro;
public:
	Dollars() {
		soums = 10881;
		euro = 0.892857;
	};
	Dollars(float currency)
	{
		this->currency = currency;
		soums = 10881;
		euro = 0.892857;
	}
	~Dollars() {};
	float getDollars()
	{
		return currency;
	}
	float getSoums()
	{
		return soums = soums * currency;
	}
	float getEuro()
	{
		return euro = currency * euro;
	}
	void setRates()
	{
		cout << "Set rates for soums : ";
		cin >> soums;
		cout << "Set rates for euros : ";
		cin >> euro;
	}

	friend ostream& operator<<(ostream& out, const Dollars& dollars);
};

ostream& operator<<(ostream& out, const Dollars& dollars)
{
	out << "Dollars : " << dollars.currency << endl;
	out << "Soums   : " << dollars.soums<< endl;
	out << "Euros   : " << dollars.euro << endl;
	return out;
}
int main()
{
	int index, hours, minutes, seconds;

	cout << "Set the hours : ";
	cin >> hours;
	cout << "Set the minutes : ";
	cin >> minutes;
	cout << "Set the seconds : ";
	cin >> seconds;

	DayTime daytime(hours, minutes, seconds);

	Start:
	cout << "\x1B[2J\x1B[H";
	cout << "1) To Display Time.\n2) To Display Time in Seconds.\n3) To increment Seconds.\n4) To decrement minutes.\n0) To exit.\n" << endl;
	cout << "Index : ";
	cin >> index;
	switch (index)
	{
	case 0:
	{
		goto End;
	}
	case 1:
	{
		cout << "Given time is : " << daytime.getHour() << ":" << daytime.getMinute() << ":" << daytime.getSecond() << ":" << endl;
		cin.clear();
		cin.ignore(32767, '\n');
		cin.get();
		break;
	}
	case 2:
	{
		cout << "All the time in seconds : " << daytime.asSecond() << endl;
		cin.clear();
		cin.ignore(32767, '\n');
		cin.get();
		break;
	}
	case 3:
	{
		daytime++;
		break;
	}
	case 4:
	{
		daytime--;
		break;
	}
	}
	goto Start;
End:
	int currency;
	cout << "Input currency : ";
	cin >> currency;
	Dollars dollar(currency);
	dollar.setRates();
	dollar.getSoums();
	dollar.getEuro();
	dollar.getDollars();
	cout << dollar;



	cin.clear();
	cin.ignore(32767, '\n');
	cin.get();
	return 0;

}