#include <iostream>
#include <fstream>	
#include <string>
#include <use_ansi.h>

using namespace std;


class Registration
{
private:
	string color = "\x1b[38;5;251m";

protected:
	string username;
	string email;
	string password, confirmPassword, checkPassword;

	static int counter;
	static int validation;
public:
	Registration()
	{
	}

	int registration()
	{
		ofstream data;
		validation = 0;
		cout << "\x1B[2J\x1B[H";
		cout << "\x1B[38;5;251m\x1B[28CRegistration\n\n";
		cout << "\x1B[38;5;236m\x1B[30CUsername\n";
		cout << "\x1B[38;5;251m\x1B[20C---------------------------\n";
		cout << "\x1B[38;5;236m\x1B[30CPassword\n";
		cout << color + "\x1B[20C---------------------------\n";
		cout << "\x1b[38;5;236m\x1B[30CConfirm\n";
		cout << color + "\x1B[20C---------------------------\n";
		cout << "\x1B[6A\x1B[22C";
		cout << "\x1B[38;5;251m";


		getline(cin, username);
		if (username == "")
		{
			cout << "\x1B[2J\x1B[H";
			cout << "\x1b[38;5;196m";
			cout << "Empty input . . .\nTry again";
			cout << "\x1B[38;5;251m";
			cin.get();
			cout << "\x1B[2J\x1B[H";
			registration();
			return 0;
		}
		data.open(username + ".dat", ios::binary | ios::_Nocreate);
		if (data.good())
		{
			cout << "\x1B[2J\x1B[H";
			cout << "This username \x1b[38;5;196m" << username << "\x1B[38;5;251m is taken T_T";
			cin.get();
			cout << "\x1B[2J\x1B[H";
			registration();
			return 0;
		}


		cout << "\x1B[38;5;0m";
		cout << "\x1B[B\x1B[22C";
		getline(cin, password);
		cout << "\x1B[B\x1B[22C";
		if (password == "")
		{
			cout << "\x1B[2J\x1B[H";
			cout << "\x1b[38;5;196m";
			cout << "Empty input . . .\nTry again";
			cout << "\x1B[38;5;251m";
			cin.get();
			cout << "\x1B[2J\x1B[H";
			registration();
			return 0;
		}
		getline(cin, confirmPassword);
		cout << "\x1B[38;5;251m";
		cout << "\x1B[1B";
		if (password != confirmPassword)
		{
			if (counter == 0)
			{
				tryAgain();
				return 0;
			}
			cout << "Passwords are different T_T\nTry again" << endl;
			cout << counter << " attemtps left. . .";
			--counter;


			cin.clear();
			cin.ignore(32767, '\n');
			cout << "\x1B[2J\x1B[H";
			color = "\x1b[38;5;196m";
			registration();
			return 0;
		}
		saving();
		validation += 1;
		return 0;
	}

	int saving()
	{
		ofstream data;
		data.open(username + ".dat", ios::binary | ios::_Noreplace);
		if (data.good())
		{
			data << password << endl;
		}


		data.close();
		return 0;
	}

	int tryAgain()
	{
		cout << "No attempts are left\n";
		cout << "Try again later T_T";
		cin.get();
		return 0;
	}


};
int Registration::counter = 2;
int Registration::validation = 0;



class LoggingIn : public Registration
{
private:
	string color = "\x1b[38;5;251m";

public:
	int loggingIn()
	{
		validation = 0;
		counter = 2;
		cout << "\x1B[2J\x1B[H";
		cout << "\x1B[38;5;251m\x1B[28CLogging in\n\n";
		cout << "\x1B[38;5;236m\x1B[30CUsername\n";
		cout << "\x1B[38;5;251m\x1B[20C---------------------------\n";
		cout << "\x1B[38;5;236m\x1B[30CPassword\n";
		cout << color + "\x1B[20C---------------------------\n";
		cout << "\x1B[4A\x1B[22C";
		cout << "\x1B[38;5;251m";

		getline(cin, username);
		cout << "\x1B[38;5;0m";
		if (username == "")
		{
			cout << "\x1B[2J\x1B[H";
			cout << "\x1b[38;5;196m";
			cout << "Empty input . . .\nTry again";
			cout << "\x1B[38;5;251m";
			cin.get();
			cout << "\x1B[2J\x1B[H";
			loggingIn();
			return 0;
		}

		cout << "\x1B[B\x1B[22C";
		getline(cin, password);
		cout << "\x1B[B\x1B[22C";
		cout << "\x1B[38;5;251m";
		if (password == "")
		{
			cout << "\x1B[2J\x1B[H";
			cout << "\x1b[38;5;196m";
			cout << "Empty input . . .\nTry again";
			cout << "\x1B[38;5;251m";
			cin.get();
			cout << "\x1B[2J\x1B[H";
			loggingIn();
			return 0;
		}

		ifstream data;
		data.open(username + ".dat", ios::binary | ios::_Nocreate |ios :: _Noreplace);
		if (data.good() == 0)
		{
			getline(data, checkPassword);
			cout << checkPassword;
			if (checkPassword == password) {
				cout << "\x1B[38;5;251m";
				cout << "\x1B[2J\x1B[H";
				cout << "Welcome";
				data.close();
				return 0;
			}
			else
			{
				if (counter == 0)
				{
					tryAgain();
					return 0;
				}
				cout << "Password is incorrect T_T\nTry again" << endl;
				cout << counter << " attemtps left. . .";
				counter -= 1;
				cin.get();
				cout << "\x1B[2J\x1B[H";
				color = "\x1b[38;5;196m";
				loggingIn();
				return 0;
			}
		}
		return 0;
	}

};

class User : public LoggingIn
{
private:
	int index = 0;

public:

	int mainPage() {
		cout << "\x1B[38;5;251m\x1B[28C1. Sing up\n";
		cout << "\x1B[38;5;251m\x1B[28C2. Sign in\n";
		cout << "Index : ";
		cin >> index;
		switch (index)
		{
		case 1:
		{
			cin.get();
			registration();
			break;
		}
		case 2:
		{
			cin.get();
			loggingIn();
			break;
		}
		default:
		{
			cout << "\x1B[2J\x1B[H";
			cout << "\x1b[38;5;196m";
			cout << "Wrong input . . .\nTry again";
			cout << "\x1B[38;5;251m";
			cin.clear();
			cin.ignore(32767, '\n');
			cin.get();
			cout << "\x1B[2J\x1B[H";
			mainPage();
			return 0;
			break;
		}
		break;
		}
		return 0;
	}

};

int main()
{

	User user;
	user.mainPage();



	cout << "End of test\n";
	system("pause");
	return 0;
}