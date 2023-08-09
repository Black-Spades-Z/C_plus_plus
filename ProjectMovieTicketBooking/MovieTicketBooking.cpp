#include <iostream>
#include <fstream>	// for working with files
#include <string>	
#include <vector>




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
		int cancel = 0;
		cout << "\x1B[2J\x1B[H";
		cout << "\x1B[38;5;15m\x1B[24CMovie Ticket Booking\n\n\n";
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
		if (username == "0")
		{
			cancel += 1;
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
		cout << "\x1B[2J\x1B[H";
		cout << "Welcome . . .\x1B[38;5;47m " << username << endl << endl;
		cout << "\x1B[38;5;251m\n\nPress enter to continue";
		cin.ignore(32767, '\n');
		if (username == "administrator" || username == "admin" || username == "manager")
		{
			validation += 2;
		}
		validation += 1;
		saving();

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

void idCard()
{
	string card;
	int i = 0;
	cout << "Please enter your id of card : ";
	cin >> card;
	for(char ch : card)
	{
		i++;
	}
	if (i != 16)
	{
		cout << "\x1B[2J\x1B[H";
		cout << "\x1b[38;5;196m";
		cout << "Empty input . . .\nTry again";
		cout << "\x1B[38;5;251m";
		cin.get();
		cin.ignore();
		cout << "\x1B[2J\x1B[H";
		idCard();
	}
	cout << "\x1B[2J\x1B[H";
	cout << "\x1B[38;5;47mDone " << endl << endl;
	cout << "\x1B[38;5;251m\n\nPress enter to continue. . .";
	cin.ignore(32767, '\n');
}

void readyTicket(string name, string sit, int status)
{
	string fname,surname, sclass, card, datecard;
	if (status == 1)
	{
		sclass = "Default Class\n";
	}
	else if (status == 2)
	{
		sclass = "Vip Class\n";
	}
	else
	{
		sclass = "Vip Plus Class\n";
	}
	cout << "Please enter your name : ";
	cin >> fname;
	cout << "Please enter your surname : ";
	cin >> surname;
	idCard();

	cout << "\x1B[2J\x1B[H" << endl;
	cout << "\x1B[38;5;15m\x1B[24C Ticket \n\n\n";
	cout << "******************************************************\n";
	cout << "Fullname   : " << fname << " "<<surname << endl;
	cout << "Movie name : " << name << endl;
	cout << "Date       : 8:00 pm \n";
	cout << "Class      : " << sclass;
	cout << "Sit        : " << sit << endl;
	cout << "******************************************************\n";
}

class LoggingIn : public Registration
{
private:
	string color = "\x1b[38;5;251m";

public:
	int loggingIn()
	{
		int cancel = 0;
		validation = 0;
		cout << "\x1B[2J\x1B[H";
		cout << "\x1B[38;5;15m\x1B[24CMovie Ticket Booking\n\n\n";
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
		if (username == "0")
		{
			cancel += 1;
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
		data.open(username + ".dat", ios::binary | ios::_Noreplace | ios::_Nocreate);
		if (data.good() != 0)
		{
			getline(data, checkPassword);

			if (checkPassword == password) {
				cout << "\x1B[38;5;251m";
				cout << "\x1B[2J\x1B[H";
				cout << "Welcome . . .\x1B[38;5;47m " << username << endl << endl;
				cout << "\x1B[38;5;251m\n\nPress enter to continue";
				cin.ignore(32767, '\n');
				cout << endl;
				if (username == "administrator" || username == "admin" || username == "manager")
				{
					validation += 2;
				}
				validation += 1;
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
		else
		{
			cout << "\x1B[2J\x1B[H";
			cout << "\x1b[38;5;196m";
			cout << "Wrong user . . .\nTry again\n";
			cout << "\x1B[38;5;251m";
			cout << counter << " attemtps left. . .";
			cin.get();
			cout << "\x1B[2J\x1B[H";
			if (counter == 0)
			{
				tryAgain();
				return 0;
			}
			counter -= 1;
			loggingIn();
		}
		return 0;
	}

};

class Sits : public LoggingIn
{

private:
	string defaultSits[5][10];
	string vipSits[3][8];
	string vipPlusSits[3][4];
	char index;
	string test;

public:
	Sits() {};

	int resetDefaultSitList()
	{
		try {

			remove("DefaultSitList.dat");
		}
		catch (...) {}
		ofstream data("DefaultSitList.dat", ios::binary | ios::trunc | ios::_Noreplace | ios::in);

		if (data.is_open()) {
			index = 'A';
			for (int i = 0; i < 5; i++)
			{
				switch (i)
				{
				case 1:
					index = 'B';
					break;
				case 2:
					index = 'C';
					break;
				case 3:
					index = 'D';
					break;
				case 4:
					index = 'E';
					break;
				}

				for (int j = 0; j < 10; j++)
				{
					string j1 = to_string(j + 1);
					defaultSits[i][j] = index + j1;
					data.write((char*)&defaultSits[i][j], sizeof(defaultSits));
				}

			}
		}
		else
		{
			cout << "1. Error\n";
		}
		data.close();

		return 0;
	}

	int showDefaultList()
	{
		cout << "\x1B[2J\x1B[H";
		cout << "\x1B[38;5;15m\x1B[24CMovie Ticket Booking\n\n\n";

		ifstream data("DefaultSitList.dat", ios::binary | ios::out);
		if (data.is_open()) {

			cout << "\x1B[28CDefault Sits\n\n";
			for (int i = 0; i < 5; i++)
			{
				cout << "\x1B[8C";
				for (int j = 0; j < 10; j++)
				{
					if (j == 5)
						cout << "    ";
					data.read((char*)&defaultSits[i][j], sizeof(defaultSits));
					cout << "[" << defaultSits[i][j] << "] ";
				}
				cout << endl << endl;

			}
		}
		else
		{
			cout << "Error\n";
		}
		data.close();
		return 0;
	}

	string chooseDefaultSit() {
		string sit;
		int k = 0;
		ifstream data("DefaultSitList.dat", ios::binary | ios::_Nocreate | ios::out);
		ofstream data2("DefaultSitListTemp.dat", ios::binary | ios::trunc | ios::_Noreplace | ios::in);
		cout << "Choose the sit : ";
		cin >> sit;
		if (sit == "sl")
		{
			cout << "\\x1b[38;5;196mChoose not sold sit . . .\\x1b[38;5;251m\n";
			cout << "Press enter to rechoose\n";
			cin.get();
			showDefaultList();
			return 0;
		}

		for (int i = 0; i < 5; i++)
		{

			for (int j = 0; j < 10; j++)
			{

				data.read((char*)&defaultSits[i][j], sizeof(defaultSits));
				if (defaultSits[i][j] == sit) {
					defaultSits[i][j] = "sl";
					k += 1;
				}

				data2.write((char*)&defaultSits[i][j], sizeof(defaultSits));
			}

		}
		if (k == 0) {
			cout << "Choose the available place \n\n";
		}
		data.close();
		data2.close();
		remove("DefaultSitList.dat");
		rename("DefaultSitListTemp.dat", "DefaultSitList.dat");
		return sit;
	}

	int resetVipSitList() {
		try {

			remove("VipSitList.dat");
		}
		catch (...) {}
		ofstream data("VipSitList.dat", ios::binary | ios::trunc | ios::_Noreplace | ios::in);

		if (data.is_open()) {
			index = 'A';
			for (int i = 0; i < 3; i++)
			{
				switch (i)
				{
				case 1:
					index = 'B';
					break;
				case 2:
					index = 'C';
					break;
				case 3:
					index = 'D';
					break;
				case 4:
					index = 'E';
					break;
				}

				for (int j = 0; j < 8; j++)
				{
					string j1 = to_string(j + 1);
					vipSits[i][j] = index + j1;
					data.write((char*)&vipSits[i][j], sizeof(vipSits));
				}

			}
		}
		else
		{
			cout << "1. Error\n";
		}
		data.close();

		return 0;
	}

	int showVipList() {
		cout << "\x1B[2J\x1B[H";
		cout << "\x1B[38;5;15m\x1B[24CMovie Ticket Booking\n\n\n";
		ifstream data("VipSitList.dat", ios::binary | ios::out);
		if (data.is_open()) {

			cout << "\x1B[31CVip Sits\n\n";
			for (int i = 0; i < 3; i++)
			{
				cout << "\x1B[13C";
				for (int j = 0; j < 8; j++)
				{
					if (j == 4)
						cout << "    ";
					data.read((char*)&vipSits[i][j], sizeof(vipSits));
					cout << "[" << vipSits[i][j] << "] ";
				}
				cout << endl << endl;

			}
		}
		else
		{
			cout << "Error\n";
		}
		data.close();
		return 0;
	}

	string chooseVipSit() {
		string sit;
		int k = 0;
		ifstream data("VipSitList.dat", ios::binary | ios::_Nocreate | ios::out);
		ofstream data2("VipSitListTemp.dat", ios::binary | ios::trunc | ios::_Noreplace | ios::in);
		cout << "Choose the sit : ";
		cin >> sit;
		if (sit == "sl")
		{
			cout << "\\x1b[38;5;196mChoose not sold sit . . .\\x1b[38;5;251m\n";
			cout << "Press enter to rechoose\n";
			cin.get();
			showVipList();
			return 0;
		}

		for (int i = 0; i < 5; i++)
		{

			for (int j = 0; j < 10; j++)
			{

				data.read((char*)&vipSits[i][j], sizeof(vipSits));
				if (vipSits[i][j] == sit) {
					vipSits[i][j] = "sl";
					k += 1;
				}

				data2.write((char*)&vipSits[i][j], sizeof(vipSits));
			}

		}
		if (k == 0) {
			cout << "Choose the available place \n\n";
		}
		data.close();
		data2.close();
		remove("vipSitList.dat");
		rename("vipSitListTemp.dat", "vipSitList.dat");

		return sit;
	}

	int resetVipPlusSitList() {
		try {

			remove("VipPlusSitList.dat");
		}
		catch (...) {}
		ofstream data("VipPlusSitList.dat", ios::binary | ios::trunc | ios::_Noreplace | ios::in);

		if (data.is_open()) {
			index = 'A';
			for (int i = 0; i < 3; i++)
			{
				switch (i)
				{
				case 1:
					index = 'B';
					break;
				case 2:
					index = 'C';
					break;
				case 3:
					index = 'D';
					break;
				case 4:
					index = 'E';
					break;
				}

				for (int j = 0; j < 4; j++)
				{
					string j1 = to_string(j + 1);
					vipPlusSits[i][j] = index + j1;
					data.write((char*)&vipPlusSits[i][j], sizeof(vipPlusSits));
				}

			}
		}
		else
		{
			cout << "1. Error\n";
		}
		data.close();

		return 0;
	}

	int showVipPlusList() {
		cout << "\x1B[2J\x1B[H";
		cout << "\x1B[38;5;15m\x1B[24CMovie Ticket Booking\n\n\n";
		ifstream data("VipPlusSitList.dat", ios::binary | ios::out);
		if (data.is_open()) {

			cout << "\x1B[28CVip Plus Sits\n\n";
			for (int i = 0; i < 3; i++)
			{
				cout << "\x1B[13C";
				for (int j = 0; j < 4; j++)
				{
					if (j == 2)
						cout << "    ";
					data.read((char*)&vipPlusSits[i][j], sizeof(vipPlusSits));
					cout << "[" << vipPlusSits[i][j] << "] ";
				}
				cout << endl << endl;

			}
		}
		else
		{
			cout << "Error\n";
		}
		data.close();
		return 0;
	}

	string chooseVipPlusSit() {
		string sit;
		int k = 0;
		ifstream data("VipPlusSitList.dat", ios::binary | ios::_Nocreate | ios::out);
		ofstream data2("VipPlusSitListTemp.dat", ios::binary | ios::trunc | ios::_Noreplace | ios::in);
		cout << "Choose the sit : ";
		cin >> sit;
		if (sit == "sl")
		{
			cout << "\\x1b[38;5;196mChoose not sold sit . . .\\x1b[38;5;251m\n";
			cout << "Press enter to rechoose\n";
			cin.get();
			showVipPlusList();
			return 0;
		}

		for (int i = 0; i < 3; i++)
		{

			for (int j = 0; j < 4; j++)
			{

				data.read((char*)&vipPlusSits[i][j], sizeof(vipPlusSits));
				if (vipPlusSits[i][j] == sit) {
					vipPlusSits[i][j] = "sl";
					k += 1;
				}

				data2.write((char*)&vipPlusSits[i][j], sizeof(vipPlusSits));
			}

		}
		if (k == 0) {
			cout << "Choose the available place \n\n";
		}
		data.close();
		data2.close();
		remove("vipPlusSitList.dat");
		rename("vipPlusSitListTemp.dat", "vipPlusSitList.dat");

		return sit;
	}

	friend void resetSits(Sits& sits);
	friend void chooseClass(Sits& sits);
};


class Record {
private:
	string name;
	double price;
	string rate;
	string country;
	string date;
	string genre;
public:
	Record(string name, string country, string date, string genre, string rate, double price) {
		setName(name);
		setPrice(price);
		setRate(rate);
		setCountry(country);
		setDate(date);
		setGenre(genre);
	};

	string getDate()
	{
		return date;
	}

	string getCountry()
	{
		return country;
	}
	string getName() {
		return name;
	}
	void setName(string name) {
		this->name = name;
	}
	double getPrice() {
		return price;
	}
	void setPrice(double price) {
		this->price = price;
	}
	string getRate() {
		return rate;
	}
	void setRate(string rate) {
		this->rate = rate;
	}
	string getGenre()
	{
		return genre;
	}
	void setGenre(string genre) {
		this->genre = genre;
	}
	void setCountry(string country) {
		this->country = country;
	}
	void setDate(string date) {
		this->date = date;
	}

};

vector<Record> records = {
	Record("The Matrix", "USA","March 1999","Science Fiction", "18+", 25.0),
	Record("Avangers","USA","April 2012","Fantasy, Battle",  "12+",30.0),
	Record("The Banker","USA","March 2021","Drama", "16+", 25.0),
	Record("Avatar 2","USA","December 2022","Science fiction" , "16+",30.0),
	Record("Mission Impossible", "USA", "May 1996", "Battle, Triller","16+", 25.0)
};


void filmsDetailAdmin(int choise);
void changeFilmName(int choice);
void filmsDetailUser(int choise);

Record getElementByIndex(string name) {
	for (int i = 0; i < records.size(); i++) {
		if (records[i].getName() == name) {
			return records[i];
		}
	}
	return Record("", "", "", "", "", 1);
}


void ListOfMovies(int i) {
	cout << "\x1B[2J\x1B[H";
	cout << "\x1B[38;5;15m\x1B[24CMovie Ticket Booking\n\n\n";
	int last = records.size();
	int choice = 0;
	for (int i = 0; i < records.size(); i++) {
		cout << "\x1B[38;5;15m\x1B[24C" << i << ". " << records[i].getName().c_str() << endl;
	}
	cin >> choice;
	cout << "\x1B[2J\x1B[H";
	if (choice >= 0 && choice < last) {
		if (i == 1)
			filmsDetailUser(choice);
		else if (i == 2)
			filmsDetailAdmin(choice);
	}
	else {
		cout << "Out of index, try again" << endl;
		ListOfMovies(i);
	}
}

void addFilm() {
	cout << "Enter movie name: " << endl << endl;
	Record rec("", "", "", "", "", 0);
	records.push_back(rec);
	filmsDetailAdmin(records.size() - 1);
}

void deleteFilm(int choice) {
	records.erase(records.begin() + choice);
	filmsDetailAdmin(records.size() - 1);
}

void changeFilmName(int choice) {
	cout << "Input film name: " << endl;
	string name;
	std::cin.ignore();
	getline(cin, name);
	cout << "\x1B[2J\x1B[H";
	Record rec = records[choice];
	rec.setName(name);
	records.erase(records.begin() + choice);
	records.push_back(rec);
	cin.clear();
	filmsDetailAdmin(records.size() - 1);
}

void changeFilmPrice(int choice) {
	cout << "Input new price: " << endl;
	double price1;
	cin >> price1;
	cout << "\x1B[2J\x1B[H";
	Record rec = records[choice];
	rec.setPrice(price1);
	records.erase(records.begin() + choice);
	records.push_back(rec);
	cin.clear();
	filmsDetailAdmin(records.size() - 1);
}

void changeFilmRate(int choice) {
	cout << "Input film rate: " << endl;
	string rate;
	std::cin.ignore();
	getline(cin, rate);
	cout << "\x1B[2J\x1B[H";
	Record rec = records[choice];
	rec.setRate(rate);
	records.erase(records.begin() + choice);
	records.push_back(rec);
	cin.clear();
	filmsDetailAdmin(records.size() - 1);
}

void chooseClass(Sits& sits, string name)
{
	int index;
	cout << "\x1B[2J\x1B[H";
	cout << "\x1B[38;5;15m\x1B[24CMovie Ticket Booking\n\n\n";
	cout << "\x1B[38;5;251m\x1B[28C1. Default class\n";
	cout << "\x1B[38;5;251m\x1B[28C2. Vip class\n";
	cout << "\x1B[38;5;251m\x1B[28C3. Vip Plus class\n";
	cout << "\x1B[38;5;251m\x1B[28C0. Exit\n";
	cout << "Index : ";
	cin >> index;
	switch (index)
	{
	case 0:
		cin.get();
		break;
	case 1:
	{
		cin.get();
		sits.showDefaultList();
		readyTicket(sits.chooseDefaultSit(), name, index);
		break;
	}
	case 2:
	{
		cin.get();
		sits.showVipList();
		readyTicket(sits.chooseVipSit(), name, index);
		break;
	}
	case 3:
	{
		cin.get();
		sits.showVipPlusList();
		readyTicket(sits.chooseVipPlusSit(), name, index);
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
		chooseClass(sits);
		break;
	}
	break;
	}
}

void filmsDetailAdmin(int choise) {
	int index;
	Record rec = records[choise];
	cout << "\x1B[2J\x1B[H";
	cout << "\x1B[38;5;15m\x1B[24CMovie Ticket Booking\n\n\n";
	cout << "* * * * * * * *  Name    : " << rec.getName() << endl;
	cout << "*             *  Date    : " << rec.getDate() << endl;
	cout << "*             *  Country : " << rec.getCountry() << endl;
	cout << "*             *  Genre   : " << rec.getGenre() << endl;
	cout << "*             *  About   :  Here is some definition about" << endl;
	cout << "*             *            the movie" << endl;
	cout << "*             *  Time    : 8:00 pm only available time" << endl;
	cout << "*             *  Rate:   : " << rec.getRate() << endl;
	cout << "* * * * * * * *  Price   : " << rec.getPrice() << "$\n\n" << endl;
	cout << "\x1B[38;5;251m\x1B[28C2. Change the Name\n";
	cout << "\x1B[38;5;251m\x1B[28C2. Change the Date\n";
	cout << "\x1B[38;5;251m\x1B[28C2. Change the Country\n";
	cout << "\x1B[38;5;251m\x1B[28C2. Change the Genre\n";
	cout << "\x1B[38;5;251m\x1B[28C2. Change the Rate\n";
	cout << "\x1B[38;5;251m\x1B[28C2. Change the Price\n";
	cout << "\x1B[38;5;251m\x1B[28C0. Exit\n";
	cout << "Index : ";
	cin >> index;
	switch (index)
	{
	case 0:
		cin.get();
		break;
	case 1:
	{
		cin.get();
		changeFilmName(choise);
		break;
	}
	case 2:
	{
		cin.get();
		//changeFilm(choise);
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
		filmsDetailUser(choise);
		break;
	}
	break;
	}
}

void filmsDetailUser(int choise) {
	int index;
	Sits sits;
	Record rec = records[choise];
	cout << "\x1B[2J\x1B[H";
	cout << "\x1B[38;5;15m\x1B[24CMovie Ticket Booking\n\n\n";
	cout << "* * * * * * * *  Name    : " << rec.getName() << endl;
	cout << "*             *  Date    : " << rec.getDate() << endl;
	cout << "*             *  Country : " << rec.getCountry() << endl;
	cout << "*             *  Genre   : " << rec.getGenre() << endl;
	cout << "*             *  About   :  Here is some definition about" << endl;
	cout << "*             *            the movie" << endl;
	cout << "*             *  Time    : 8:00 pm only available time" << endl;
	cout << "*             *  Rate    : " << rec.getRate() << endl;
	cout << "* * * * * * * *  Price   : " << rec.getPrice() << "$\n\n" << endl;
	cout << "\x1B[38;5;251m\x1B[28C1. Choose the sit\n";
	cout << "\x1B[38;5;251m\x1B[28C0. Exit\n";
	cout << "Index : ";
	cin >> index;
	switch (index)
	{
	case 0:
		cin.get();
		break;
	case 1:
	{
		cin.get();
		chooseClass(sits, rec.getName());
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
		filmsDetailUser(choise);
		break;
	}
	break;
	}
}

void resetSits(Sits& sits)
{
	int index;
	cout << "\x1B[2J\x1B[H";
	cout << "\x1B[38;5;15m\x1B[24CMovie Ticket Booking\n\n\n";
	cout << "\x1B[38;5;251m\x1B[28C1. Reset Default Sits\n";
	cout << "\x1B[38;5;251m\x1B[28C2. Reset Vip Sits\n";
	cout << "\x1B[38;5;251m\x1B[28C3. Reset Vip Plus sits\n";
	cout << "\x1B[38;5;251m\x1B[28C4. Reset All sits\n";
	cout << "\x1B[38;5;251m\x1B[28C0. Exit\n";
	cout << "Index : ";
	cin >> index;
	switch (index)
	{
	case 0:
		cin.get();
		break;
	case 1:
	{
		cin.get();
		sits.resetDefaultSitList();
		cout << "\x1B[2J\x1B[H";
		cout << "\x1B[38;5;47mDone " << endl << endl;
		cout << "\x1B[38;5;251m\n\nPress enter to continue";
		cin.ignore(32767, '\n');
		break;
	}
	case 2:
	{
		cin.get();
		sits.resetVipSitList();
		cout << "\x1B[2J\x1B[H";
		cout << "\x1B[38;5;47mDone " << endl << endl;
		cout << "\x1B[38;5;251m\n\nPress enter to continue";
		cin.ignore(32767, '\n');
		break;
	}
	case 3:
	{
		cin.get();
		sits.resetVipPlusSitList();
		cout << "\x1B[2J\x1B[H";
		cout << "\x1B[38;5;47mDone " << endl << endl;
		cout << "\x1B[38;5;251m\n\nPress enter to continue";
		cin.ignore(32767, '\n');
		break;
	}
	case 4:
	{
		cin.get();
		sits.resetDefaultSitList();
		sits.resetVipSitList();
		sits.resetVipPlusSitList();
		cout << "\x1B[2J\x1B[H";
		cout << "\x1B[38;5;47mDone " << endl << endl;
		cout << "\x1B[38;5;251m\n\nPress enter to continue";
		cin.ignore(32767, '\n');
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

		break;
	}
	break;
	}
}

void chooseClass(Sits& sits)
{
}

void administratorView() {
	int index;
	Sits sits;
	cout << "\x1B[2J\x1B[H";
	cout << "\x1B[38;5;15m\x1B[24CMovie Ticket Booking\n\n\n";
	cout << "\x1B[38;5;251m\x1B[28C1. List of Movies\n";
	cout << "\x1B[38;5;251m\x1B[28C2. Add the film\n";
	cout << "\x1B[38;5;251m\x1B[28C3. Reset the sits\n";
	cout << "\x1B[38;5;251m\x1B[28C0. Exit\n";
	cout << "Index : ";
	cin >> index;
	switch (index)
	{
	case 0:
		cin.get();
		break;
	case 1:
	{
		cin.get();
		ListOfMovies(2);
		break;
	}
	case 2:
	{
		cin.get();
		addFilm();
		break;
	}
	case 3:
	{
		cin.get();
		resetSits(sits);
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
		administratorView();
		break;
	}
	break;
	}
}

void userView()
{
	ListOfMovies(1);
}


class MainMenu : public Sits
{
private:
	int index = 0;

public:
	MainMenu() {};

	int mainPage()
	{
		cout << "\x1B[2J\x1B[H";
		cout << "\x1B[38;5;15m\x1B[24CMovie Ticket Booking\n\n\n";
		cout << "\x1B[38;5;251m\x1B[28C1. Sing up\n";
		cout << "\x1B[38;5;251m\x1B[28C2. Sign in\n";
		cout << "\n\tIndex : \n\n";
		cout << "\x1B[38;5;236m(Always input 0 to exit)\n\x1B[38;5;251m\x1B[3A\x1B[16C";
		cin >> index;
		switch (index)
		{
		case 0:
			break;
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

class User : public MainMenu
{
public:
	User()
	{
	};

	int getValidation()
	{
		return validation;
	}
};

int main()
{
	int validation;
	User user;

	user.mainPage();
	validation = user.getValidation();
	if (validation == 1)
	{
		userView();
	}
	else if (validation > 1)
	{
		administratorView();
	}



	return 0;
}