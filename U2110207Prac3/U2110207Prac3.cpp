/*
Name	: Azizdek Muminjonov
ID		: U2110207
Project : Practice Lab Asignment 3

Please try to delete player.
*/
#include <iostream>
#include <string>

using namespace std;

class FullName
{
private:
	string FirstName;
	string MiddleName;
	string LastName;

public:
	FullName()
	{
		FirstName = "Unknown";
		MiddleName = "Unknown";
		LastName = "Unknown";
	}
	~FullName() {};
	void setFirstName(string name)
	{
		FirstName = name;
	}
	void getFirstName()
	{
		cout << "First Name : " << FirstName << endl;
	}
	void setMiddleName(string middlename)
	{
		MiddleName = middlename;
	}
	void getMiddleName()
	{
		cout << "Middle Name : " << MiddleName << endl;
	}
	void setLastName(string lastname)
	{
		LastName = lastname;
	}
	void getLastName()
	{
		cout << "Last Name : " << LastName << endl;
	}
	friend class Player;
};

class Player
{
private:

	string name;
	string Player_id;
	string PlayerName;
	int Matches_Played;
	static int Goals_Scored;

public:
	Player(){};
	Player(FullName &player)
	{
		PlayerName = player.FirstName;
		Player_id = "Unknown";
		Matches_Played = 0;
	}
	~Player() {
		cout << "\x1B[2J\x1B[H";
		cout << "\n\nPlayer is successfully deleted from memory.\nTo add another please reenter. T_T\n\n\n";
	};
	void setPlayer_id(string id)
	{
		Player_id = id;
	}
	void getPlayer_id()
	{
		cout << "Player id : " << Player_id << endl;
	}
	void setMatches_Played(int matches)
	{
		Matches_Played = matches;
	}
	void getMatchesPlayed()
	{
		cout << "Matches played : " << Matches_Played << endl;
	}
	void setGoals_Scores(int goals)
	{
		Goals_Scored = goals;
	}
	void getGoals_Scored()
	{
		cout << "Goals scored : " << Goals_Scored << endl;
	}
	void setPlayerName(FullName &player)
	{

		cout << "Set First name : ";
		cin >> name;
		player.FirstName = name;
		cout << "Set Middle name : ";
		cin >> name;
		player.MiddleName = name;
		cout << "Set Last name : ";
		cin >> name;
		player.LastName = name;
	}
	void getPlayerName(FullName &player)
	{
		cout << "First name  : ";
		player.getFirstName();
		cout << "Middle name : ";
		player.getMiddleName();
		cout << "Last name   : ";
		player.getLastName();
	}
	friend void Increase_GoalsScored(Player &player);
};
int Player::Goals_Scored = 0;

void Increase_GoalsScored(Player &player)
{
	player.Goals_Scored++;
}

int main()
{
	FullName person;
	Player *player = new Player;

	int index;
Menu:
	system("cls");
	cout << "\t\t\tMenu\n";
	cout << "1) Add Player Details.\n2) Display Player details.\n3) Increase Goal Scored.\n4) Delete Player from memory.\n";
	cout << "\nIndex : ";
	cin >> index;
	switch (index)
	{
	case 1:
	{

		player->setPlayerName(person);
		break;
	}
	case 2:
	{
		player->getPlayerName(person);
		player->getGoals_Scored();
		cin.clear();
		cin.ignore(32767, '\n');
		cin.get();
		break;
	}
	case 3:
	{
		Increase_GoalsScored(*player);
		break;
	}
	case 4:
	{
		delete player;
		return 0;
	}
	}
	goto Menu;
	cin.clear();
	cin.ignore(32767, '\n');
	cin.get();
	return 0;
}
