/*
Name : Azizdek Muminjonov
ID : U2110207
Project : Quizs
*/


#include <iostream>
#include <string>
#include "article.h"
#include "dayTypeh.h"
#include "Clock.h"


using namespace std;

// Task 1

void Article::print(Article &articles)
{
    articles.getArticle();
    articles.getArticleName();
    articles.getSalesPrice();
    cout << "Number : " << number;
}

// Task 3


void operator<<(ostream& input, Clock& time) {
    time.GetTime();
}

void operator>>(istream& output, Clock& time) {
    cout << "Enter hour: ";
    cin >> time.hour;
    cout << "Enter minute: ";
    cin >> time.minute;
    cout << "Enter seconds: ";
    cin >> time.seconds;
    time.SetTime(time.hour, time.minute, time.seconds);
}


int main()
{

    string day;
    int numb;

	int index;
	long articles;
	string name;
	double price;
	Article article;
    dayType d;


    Clock clock, clock1;



Task_1:
    cout << "\x1B[2J\x1B[H";

	cout << "Task Article\n\n\n\n";
	cout << "Choose what to do : " << endl;
	cout << "\t1) Set Article\n\t2) Set Article name\n\t3) Set price\n\t4) Print\n\t0) Next Task\n";
    cout << "\nIndex : ";
	cin >> index;
	switch (index)
	{
	case 0:
	{
		goto Task_2;
		break;
	}
	case 1:
	{
		cout << "Article : ";
		cin >> articles;
		article.setArticle(articles);
		break;
	}
	case 2:
	{
		cout << "Article name : ";
		cin >> name;
		article.setArticleName(name);
		break;
	}
	case 3:
	{
		cout << "Price : ";
		cin >> price;
		article.setSalesPrice(price);
		break;
	}
	case 4:
	{
		article.print(article);
        cin.clear();
        cin.ignore(32767, '\n');
        cin.get();
        break;
	}
	default:
	{
		cout << "There is no such an option T_T";
        cin.clear();
        cin.ignore(32767, '\n');
        cin.get();
        goto Task_1;
        break;
	}
	}
    goto Task_1;

Task_2:



    cout << "\x1B[2J\x1B[H";

    cout << "Task Day Time\n\n\n\n";
    cout << "Choose what to do : " << endl;
    cout << "\t1) Set the day\n\t2) Print the day\n\t3) Return next the day\n\t4) Return the previous day\n\t5) Day after specified days\n\t0) Next Task\n";
    cout << "\nIndex : ";
    cin >> index;
    switch (index)
    {
    case 0:
    {
        goto Task_3;
        break;
    }
    case 1:
    {
        cout << "Enter the day : ";
        cin >> day;
        d.setday(day);
        break;
    }
    case 2:
    {
        d.print();
        cin.clear();
        cin.ignore(32767, '\n');
        cin.get();
        break;
    }
    case 3:
    {
        d.Nextday();
        cin.clear();
        cin.ignore(32767, '\n');
        cin.get();
        break;
    }
    case 4:
    {
        d.preday();
        cin.clear();
        cin.ignore(32767, '\n');
        cin.get();
        break;
    }
    case 5:
    {
        cout << "Enter the number : ";
        cin >> numb;
        d.add(numb);
        cin.clear();
        cin.ignore(32767, '\n');
        cin.get();
        break;
    }
    default:
    {
        cout << "There is no such an option T_T";
        cin.clear();
        cin.ignore(32767, '\n');
        cin.get();
        goto Task_1;
        break;
    }
    }

    goto Task_2;
    
Task_3:

    cin >> clock;
    cout << clock;
    cout << endl;
    clock++;
    cout << endl;
    cout << clock;
    cin >> clock1;
    cout << clock1;
    cout << endl;
    clock1--;
    cout << clock1;
    cout << endl;

    clock == clock1;




	cin.clear();
	cin.ignore(32767, '\n');
	cin.get();
	return 0;
}