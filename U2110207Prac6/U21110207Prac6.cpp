#include <iostream>
#include <string>

#include "Account.h"
#include "Publication.h"

using namespace std;


int main()
{
    int pages, index = 0;
    float time, price;
    string name;
    Book book;
    Tape tape;

    cout << "Task 1\n\n" << endl;
    cout << "Please enter the name of the book : ";
    getline(cin, name);
    book.setTitle(name);
task1:
    if (index > 0) {
        cout << "Task 1\n\n" << endl;
    }
    cout << "\t1) Set the pages.\n\t2) Set playing time.\n\t3) Set price.\n\t4) Show all details.\n\t5) Task 2.";
    cout << "\nIndex: ";
    cin >> index;
    switch (index)
    {
    case 1:
    {
        cout << "Pages : ";
        cin >> pages;
        book.setPageCount(pages);
        cout << "\x1B[2J\x1B[H";
        goto task1;
        break;
    }
    case 2:
    {
        cout << "Time : ";
        cin >> time;
        tape.setTime(time);
        cout << "\x1B[2J\x1B[H";
        goto task1;
        break;
    }
    case 3:
    {
        cout << "Price : ";
        cin >> price;
        book.setPrice(price);
        cout << "\x1B[2J\x1B[H";
        goto task1;
        break;
    }
    case 4:
    {
        book.getTitle();
        book.getPageCount();
        tape.getTime();
        book.getPrice();
        cin.clear();
        cin.ignore(32767, '\n');
        cin.get();
        cout << "\x1B[2J\x1B[H";
        goto task1;
        break;
    }
    case 5:
    {

        break;
    }
    default:
    {
        cout << "Input available index T_T";
        cin.clear();
        cin.ignore(32767, '\n');
        cin.get();
        cout << "\x1B[2J\x1B[H";
        goto task1;
        break;
    }
    break;
    }


    Curr_Acct curracc;
    Sav_Acct savacc;
    float deposit, ammount;
    float deposit1, ammount1;
    int number, number1, number2, month;


    cout << "\t\tTask 2\n\n";
    cout << "\t1) Current account.\n\t2) Saved account.";
    cout << "Please choose the account : ";
    cout << "Index : ";
    cin >> number;
number1:

    if (number == 1)
    {
        cout << "\x1B[2J\x1B[H";
        cout << "\t\tCurrenct account.";
        cout << "\t1) Accept deposit\n\t2) Display balance\n\t3) Permit a withdrawal and update balance\n\t0) Exit";
        cout << "Index : ";
        cin >> number1;
        switch (number1)
        {
        case 0:
            return 0;
            break;

        case 1:
        {
            cout << "Input deposit :";
            cin >> deposit;
            curracc.Deposit(deposit);
            break;
        }
        case 2:
        {
            curracc.Balance();
            system("pause");
            break;
        }
        case 3: 
        {
            cout << "Ammount to withdraw : ";
            cin >> ammount;
            curracc.Withdraw(ammount);
            break;
        }
        default:
        {
            cout << "It is a wrong number T_T ";
            cin.clear();
            cin.ignore(32767, '\n');
            cin.get();
            break;
        }
    }
        goto number1;
    }
     cout << "\x1B[2J\x1B[H";
        cout << "\t\tCurrenct account.";
        cout << "\t1) Accept deposit\n\t2) Display balance\n\t3) Permit a withdrawal and update balance\n\t4) Compute interest\n\t0) Exit";
        cout << "Index : ";
        cin >> number1;
        switch (number1)
        {
        case 0:
            return 0;
            break;

        case 1:
        {
            cout << "Input deposit :";
            cin >> deposit1;
            curracc.Deposit(deposit1);
            break;
        }
        case 2:
        {
            curracc.Balance();
            system("pause");
            break;
        }
        case 3: 
        {
            cout << "Ammount to withdraw : ";
            cin >> ammount1;
            savacc.Withdraw(ammount1);
            cin.clear();
            cin.ignore(32767, '\n');
            cin.get();
            break;
        }
        case 4:
        {
            cout << "Enter the months : ";
            cin >> month;
            savacc.Compute_Interest(month);
            cin.clear();
            cin.ignore(32767, '\n');
            cin.get();
            break;
        }

        default:
        {
            cout << "It is a wrong number T_T ";
            cin.clear();
            cin.ignore(32767, '\n');
            cin.get();
            break;
        }
    }
        goto number1;










  cin.clear();
  cin.ignore(32767, '\n');
  cin.get();
  return 0;
}