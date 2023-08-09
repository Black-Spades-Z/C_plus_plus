#include<iostream>
#include<cmath>
#include<windows.h>
#include<conio.h>
#include<stdio.h>
#include<cstring>
#define PI 3.14159265
using namespace std;
void SupportSection();
void id1();
void add();
void srt();
void sub();
void mult();
void division();
void pow();
void factorial();
void trig();
void main_1();
void convert();
void day();
void day_1();
void day_2();
void day_3();
void day_4();
void day_5();
void day_6();
void day_7();
void day_8();
void day_9();
void day_10();
void day_11();
void day_12();
void day_13();
void day_14();
void day_15();
void day_16();
void day_17();
void day_18();
void day_19();
void clear() {
	cout << "\x1B[2J\x1B[H";
}
char bck = 10;
int intro = 1;
int main() {
	if (bck == 10) {
		system("color 0F");
	}

	system("TITLE STUDENT ASSISTANT PROGRAM");
	int var;
	if (intro == 1) {
		cout << " \31 The program was developed by\n \n \4 Raimdjanov Shahboz \4 \n \4 Muminjanov Aziz \4 \n \4 Mustafayev Mukhammadjon \4 \n \4 Nasimov Zafar \4 \n";
		cout << "\x1B[76C\x1B[20B";
		cout << "Copyright @ 2021, SAP, All Rights Reserved.\n";
		cout << "\x1B[93C\x1B[B";
		cout << "Press Enter to continue...\n";
		cin.get();
		intro += 1;
	}
	clear();


	cout << "\n                                                                         Welcome to the student assistant program \37\n";
	cout << "\n                                                                 This program is developed to perform a number of tasks\n "
		"                                                               & serves as a navigator / assistant for the IUT student.\n\n\n";
	cout << "\n Please select the section \37\n";
	cout << "\n 1) Support Section";
	cout << "\n 2) Timetable";
	cout << "\n 3) Calculator";
	cout << "\n 4) Customization";
	cout << "\n 5) Exit\n";
	cout << "\n Choose the section \32 ";
	cin >> var;
	switch (var) {
	case 1:
		clear();
		SupportSection();
		break;
	case 2:
		clear();
		id1();
		break;
	case 3:
		clear();
		main_1();
		break;
	case 4:
		clear();
		cout << "\n < Customization >\n\n";
		cout << " 1) 'White - Red' Mode\n";
		cout << " 2) 'Black - Green' Mode\n";
		cout << " 3) 'Grey - White' Mode\n";
		cout << " 4) 'Light Yellow - Black' Mode\n";
		cout << " 5) 'Windows Error' Mode\n";
		cout << " 6) 'Hello Kitty' Mode\n";
		cout << " 7) 'Green - Black' Mode\n ";
	Case4:
		cout << " \32 ";
		cin >> bck;
		switch (bck) {
		case '1':
			system("color F4");
			main();
			break;
		case '2':
			system("color 0A");
			main();
			break;
		case '3':
			system("color 8F");
			main();
			break;
		case '4':
			system("color E0");
			main();
			break;
		case '5':
			system("color 1F");
			main();
			break;
		case '6':
			system("color DF");
			main();
			break;
		case '7':
			system("color A0");
			main();
			break;
		default:
			cout << " Error! Try again. T_T\n";
			goto Case4;
			break;
		}
		break;
	case 5:
		return 0;
	default:
		clear();
		main();
	}

	cin.clear();
	cin.ignore(32767, '\n');
	cin.get();
	return 0;
	_getch();
}

void SupportSection() {																 // Begining
	int number, number2, number3;
	cout << "\n < Support Section >\n\n";
	cout << "\n 1) Support Affairs";									 // Main menu
	cout << "\n 2) Professors";
	cout << "\n 3) Students Union";
	cout << "\n 4) Main menu\n\n";
	cout << " Choose the section \32 ";
	cin >> number;
	cout << endl << endl;

	switch (number) {
	case 1:																						// Support Affairs
	{
		clear();
		cout << "\n < Supports Affairs >\n\n";

		cout << " 1) Academic Affairs\n";
		cout << " 2) Students Affair\n";
		cout << " 3) Accounting\n";
		cout << " 4) Library\n";
		cout << " 5) Lawyer\n";
		cout << " 6) Healthcare\n";
		cout << " 7) IT Dep\n";
		cout << " 8) Main menu\n\n";
		cout << " Choose the section \32 ";
		cin >> number2;
		cout << endl << endl;
		if (number2 != 8 && number2 > 0 && number2 < 8) {
			clear();
			cout << "\n < Support Affairs >\n\n";
			switch (number2)
			{
			case 1:
			{
			Academicaffairs:
				cout << "\n 1) Emails\n";
				cout << " 2) Numbers\n";
				cout << " 3) Main menu\n\n";
				cout << " Choose the section \32 ";
				cin >> number3;
				cout << endl << endl;
				if (number3 != 3) {
					clear();
					if (number3 == 1) {
						cout << "\n < Emails >";
					}
					else if (number3 == 2) {
						cout << "\n < Numbers >";
					}
				}
				switch (number3)
				{
				case 1: {
					cout << endl << endl;
					cout << " Academic Affairs \32 academicaffairs@inha.uz" << endl << endl;
					int index;
					cout << "\n\n 1) Back\n ";
					cin >> index;
					if (index == 1) {
						clear();
						goto Academicaffairs;
					}
					break;
				}

				case 2: {
					cout << endl << endl;
					cout << " Academic Affairs \32 +998(71)289-99-99 (0400)" << endl << endl;
					int index;
					cout << "\n\n 1) Back\n ";
					cin >> index;
					if (index == 1) {
						clear();
						goto Academicaffairs;
					}
					break;
				}

				case 3:
				{
					clear();
					SupportSection();
					break;
				}
				default: {
					cout << endl;
					cout << " Please, choose only from given sections." << endl;
					cout << " We are so sad to close the section. : (" << endl;
					cout << " To return to the Main menu, tap to the keybord. ";
					cin.clear();
					cin.ignore(32767, '\n');
					cin.get();
					clear();
					main();
					break; }
					   break;
				}
				break;
			}
			case 2:
			{
			Studentsaffair:
				cout << "\n 1) Emails\n";
				cout << " 2) Numbers\n";
				cout << " 3) Main menu\n\n";
				cout << " Choose the section \32 ";
				cin >> number3;
				cout << endl << endl;
				if (number3 != 3) {
					clear();
					if (number3 == 1) {
						cout << "\n < Emails >";
					}
					else if (number3 == 2) {
						cout << "\n < Numbers >";
					}
				}
				switch (number3)
				{
				case 1: {
					clear();
					cout << endl << endl;
					int index;
					cout << "\n\n 1) Back\n ";
					cin >> index;
					if (index == 1) {
						clear();
						goto Studentsaffair;
					}

					break;
				}

				case 2: {
					clear();
					cout << endl << endl;
					cout << " Students Affairs \32 +998(71)289-99-99 (0131,0132,0133)" << endl << endl;
					int index;
					cout << "\n\n 1) Back\n ";
					cin >> index;
					if (index == 1) {
						clear();
						goto Studentsaffair;
					}
					break;
				}

				case 3: {
					clear();
					SupportSection();
					break;
				}
				default: {
					cout << endl;
					cout << " Please, choose only from given sections." << endl;
					cout << " We are so sad to close the section. : (" << endl;
					cout << " To return to the Main menu, tap to the keybord. ";
					cin.clear();
					cin.ignore(32767, '\n');
					cin.get();
					clear();
					main();
					break; }
					   break;
				}
				break;
			}

			case 3:
			{
			Accounting:
				cout << "\n 1) Emails\n";
				cout << " 2) Numbers\n";
				cout << " 3) Main menu\n\n";
				cout << " Choose the section \32 ";
				cin >> number3;
				cout << endl << endl;
				if (number3 != 3) {
					clear();
					if (number3 == 1) {
						cout << "\n < Emails >";
					}
					else if (number3 == 2) {
						cout << "\n < Numbers >";
					}
				}
				switch (number3)
				{
				case 1: {
					clear();
					cout << endl << endl;
					cout << " Accounting \32 accounting@inha.uz" << endl << endl;
					int index;
					cout << "\n\n 1) Back\n ";
					cin >> index;
					if (index == 1) {
						clear();
						goto Accounting;
					}
					break;
				}

				case 2: {
					clear();
					cout << endl << endl;
					cout << " Accounting \32 +998(71)289-99-99 (0111)" << endl << endl;
					int index;
					cout << "\n\n 1) Back\n ";
					cin >> index;
					if (index == 1) {
						clear();
						goto Accounting;
					}
					break;
				}

				case 3: {
					clear();
					SupportSection();
					break;
				}
				default: {
					cout << endl;
					cout << " Please, choose only from given sections." << endl;
					cout << " We are so sad to close the section. : (" << endl;
					cout << " To return to the Main menu, tap to the keybord. ";
					cin.clear();
					cin.ignore(32767, '\n');
					cin.get();
					clear();
					main();
					break;  }
					   break;
				}
				break;
			}

			case 4:
			{
			Library:
				cout << "\n 1) Emails\n";
				cout << " 2) Numbers\n";
				cout << " 3) Main menu\n\n";
				cout << " Choose the section \32 ";
				cin >> number3;
				cout << endl << endl;
				if (number3 != 3) {
					clear();
					if (number3 == 1) {
						cout << "\n < Emails >";
					}
					else if (number3 == 2) {
						cout << "\n < Numbers >";
					}
				}
				switch (number3)
				{
				case 1: {
					clear();
					cout << endl << endl;
					cout << " Library \32 library@inha.uz" << endl << endl;
					int index;
					cout << "\n\n 1) Back\n ";
					cin >> index;
					if (index == 1) {
						clear();
						goto Library;
					}
					break;
				}

				case 2: {
					clear();
					cout << " Library \32 library@inha.uz" << endl << endl;
					int index;
					cout << "\n\n 1) Back\n ";
					cin >> index;
					if (index == 1) {
						clear();
						goto Library;
					}
					break;
				}

				case 3: {
					clear();
					SupportSection();
					break;
				}
				default: {
					cout << endl;
					cout << " Please, choose only from given sections." << endl;
					cout << " We are so sad to close the section. : (" << endl;
					cout << " To return to the Main menu, tap to the keybord. ";
					cin.clear();
					cin.ignore(32767, '\n');
					cin.get();
					clear();
					main();
					break;  }
					   break;
				}
				break;
			}

			case 5:
			{
			Lawyer:
				cout << "\n 1) Emails\n";
				cout << " 2) Numbers\n";
				cout << " 3) Main menu\n\n";
				cout << " Choose the section \32 ";
				cin >> number3;
				cout << endl << endl;
				if (number3 != 3) {
					clear();
					if (number3 == 1) {
						cout << "\n < Emails >";
					}
					else if (number3 == 2) {
						cout << "\n < Numbers >";
					}
				}
				switch (number3)
				{
				case 1: {
					clear();
					cout << endl << endl;
					cout << " Lawyer \32 lawyer@inha.uz" << endl << endl;
					int index;
					cout << "\n\n 1) Back\n ";
					cin >> index;
					if (index == 1) {
						clear();
						goto Lawyer;
					}
					break;
				}

				case 2: {
					clear();
					cout << endl << endl;
					cout << " Lawyer \32 +998(71)289-99-99 (0161,0160)" << endl << endl;
					int index;
					cout << "\n\n 1) Back\n ";
					cin >> index;
					if (index == 1) {
						clear();
						goto Lawyer;
					}
					break;
				}

				case 3: {
					clear();
					SupportSection();
					break;
				}
				default: {
					cout << endl;
					cout << " Please, choose only from given sections." << endl;
					cout << " We are so sad to close the section. : (" << endl;
					cout << " To return to the Main menu, tap to the keybord. ";
					cin.clear();
					cin.ignore(32767, '\n');
					cin.get();
					clear();
					main();
					break;  }
					   break;
				}
				break;
			}

			case 6:
			{
			Healthcare:
				cout << "\n 1) Emails\n";
				cout << " 2) Numbers\n";
				cout << " 3) Main menu\n\n";
				cout << " Choose the section \32 ";
				cin >> number3;
				cout << endl << endl;
				if (number3 != 3) {
					clear();
					if (number3 == 1) {
						cout << "\n < Emails >";
					}
					else if (number3 == 2) {
						cout << "\n < Numbers >";
					}
				}
				switch (number3)
				{
				case 1: {
					clear();
					cout << endl << endl;
					cout << " Healthcare \32 healthcare@inha.uz" << endl << endl;
					int index;
					cout << "\n\n 1) Back\n ";
					cin >> index;
					if (index == 1) {
						clear();
						goto Healthcare;
					}
					break;
				}

				case 2: {
					clear();
					cout << endl << endl;
					cout << " Healthcare \32 +998(71)289-99-99 (0145&0187)" << endl << endl;
					int index;
					cout << "\n\n 1) Back\n ";
					cin >> index;
					if (index == 1) {
						clear();
						goto Healthcare;
					}
					break;
				}

				case 3: {
					clear();
					SupportSection();
					break;
				}
				default: {
					cout << endl;
					cout << " Please, choose only from given sections." << endl;
					cout << " We are so sad to close the section. : (" << endl;
					cout << " To return to the Main menu, tap to the keybord. ";
					cin.clear();
					cin.ignore(32767, '\n');
					cin.get();
					clear();
					main();
					break;  }
					   break;
				}
				break;
			}

			case 7:
			{
			ITDep:
				cout << "\n 1) Emails\n";
				cout << " 2) Numbers\n";
				cout << " 3) Main menu\n\n";
				cout << " Choose the section \32 ";
				cin >> number3;
				cout << endl << endl;
				if (number3 != 3) {
					clear();
					if (number3 == 1) {
						cout << "\n < Emails >";
					}
					else if (number3 == 2) {
						cout << "\n < Numbers >";
					}
				}
				switch (number3)
				{
				case 1: {
					clear();
					cout << endl << endl;
					cout << " IT Dep \32 helpdesk@inha.uz" << endl << endl;
					int index;
					cout << "\n\n 1) Back\n ";
					cin >> index;
					if (index == 1) {
						clear();
						goto ITDep;
					}
					break;
				}

				case 2: {
					clear();
					cout << endl << endl;
					cout << " IT Dep \32 +998(71)289-99-99 (0222)" << endl << endl;
					int index;
					cout << "\n\n 1) Back\n ";
					cin >> index;
					if (index == 1) {
						clear();
						goto ITDep;
					}
					break;
				}

				case 3: {
					clear();
					SupportSection();
					break;
				}
				default: {
					cout << endl;
					cout << " Please, choose only from given sections." << endl;
					cout << " We are so sad to close the section. : (" << endl;
					cout << " To return to the Main menu, tap to the keybord. ";
					cin.clear();
					cin.ignore(32767, '\n');
					cin.get();
					clear();
					main();
					break;  }
					   break;
				}
				break;
			}

			case 8:
			{
				clear();
				main();
				break;
			}
			default: {
				cout << endl;
				cout << " Please, choose only from given sections." << endl;
				cout << " We are so sad to close the section. : (" << endl;
				cout << " To return to the Main menu, tap to the keybord. ";
				cin.clear();
				cin.ignore(32767, '\n');
				cin.get();
				clear();
				main();
				break;  }
				   break;
			}
			break;
		}
		clear();
		main();
		break;
	}
	case 2:																						// Proffesors
	{
	Professors:
		clear();
		cout << "\n < Professors >\n\n";
		cout << " 1) Dokov Steftcho\n";
		cout << " 2) Kirti Seth\n";
		cout << " 3) Rustam Tashkhodjayev\n";
		cout << " 4) Neyaskulova Rano\n";
		cout << " 5) Abdullaev Sarvar\n";
		cout << " 6) Turgunova Shaxnaza\n";
		cout << " 7) Seth Ashish\n";
		cout << " 8) Gulzora Mirzayeva\n";
		cout << " 9) Main menu\n\n";
		cout << " Choose the section \32 ";
		cin >> number2;
		cout << endl << endl;
		if (number2 != 9) {
			clear();
			cout << "\n < Professors >\n\n";
		}
		switch (number2)
		{
		case 1:
		{
			cout << endl << endl;
			cout << " Email        \32 S.Dokov@inha.uz" << endl << endl;
			cout << " Office room  \32 B409 " << endl << endl;
			cout << " Office hours \32 Tuesday  12:00 - 13:00, Wednesday  14:00 - 15:00" << endl << endl;
			int index;
			cout << "\n\n 1) Back\n ";
			cin >> index;
			if (index == 1) {
				goto Professors;
			}
			break;
		}
		case 2:
		{
			cout << endl << endl;
			cout << " Email        \32 k.seth@inha.uz" << endl << endl;
			cout << " Office room  \32 A402 " << endl << endl;
			cout << " Office hours \32 Tuesday  15:30 - 16:30, Wednesday  12:15 - 13:15" << endl << endl;
			int index;
			cout << "\n\n 1) Back\n ";
			cin >> index;
			if (index == 1) {
				goto Professors;
			}
			break;
		}
		case 3:
		{
			cout << endl << endl;
			cout << " Email        \32 r.tashkhodjaev@inha.uz" << endl << endl;
			cout << " Office room  \32 A502" << endl << endl;
			cout << " Office hours \32 Tuesday  15:30 - 16:30, Friday  15:30 - 16:30 " << endl << endl;
			int index;
			cout << "\n\n 1) Back\n ";
			cin >> index;
			if (index == 1) {
				goto Professors;
			}
			break;
		}
		case 4:
		{
			cout << endl << endl;
			cout << " Email         \32 N.Rano@inha.uz" << endl << endl;
			cout << " Office room   \32 A402-1" << endl << endl;
			cout << " Office hours  \32 Wednesday  15:30 - 16:00, Thursday  16:00 - 17:00" << endl << endl;
			int index;
			cout << "\n\n 1) Back\n ";
			cin >> index;
			if (index == 1) {
				goto Professors;
			}
			break;
		}
		case 5:
		{
			cout << endl << endl;
			cout << " Email         \32 s.abdullaev@inha.uz" << endl << endl;
			cout << " Office room   \32 B411 (or A203)" << endl << endl;
			cout << " Office hours  \32 Wednesday  15:30 - 16:00, Thursday  16:00 - 17:00" << endl << endl;
			int index;
			cout << "\n\n 1) Back\n ";
			cin >> index;
			if (index == 1) {
				goto Professors;
			}
			break;
		}
		case 6:
		{
			cout << endl << endl;
			cout << " Email        \32" << endl << endl;
			cout << " Office room  \32" << endl << endl;
			cout << " Office hours \32" << endl << endl;
			int index;
			cout << "\n\n 1) Back\n ";
			cin >> index;
			if (index == 1) {
				goto Professors;
			}

			break;
		}
		case 7:
		{
			cout << endl << endl;
			cout << " Email        \32 a.seth@inha.uz" << endl << endl;
			cout << " Office room  \32 A403" << endl << endl;
			cout << " Office hours \32" << endl << endl;
			int index;
			cout << "\n\n 1) Back\n ";
			cin >> index;
			if (index == 1) {
				goto Professors;
			}
			break;
		}
		case 8:
		{
			cout << endl << endl;
			cout << " Email        \32 g.mirzayeva@inha.uz" << endl << endl;
			cout << " Office room  \32" << endl << endl;
			cout << " Office hours \32" << endl << endl;
			int index;
			cout << "\n\n 1) Back\n ";
			cin >> index;
			if (index == 1) {
				goto Professors;
			}
			break;
		}
		case 9:
		{
			clear();
			SupportSection();
			break;
		}
		default:
		{
			cout << endl;
			cout << " Please, choose only from given sections." << endl;
			cout << " We are so sad to close the section. : (" << endl;
			cout << " To return to the Main menu, tap to the keybord. ";
			cin.clear();
			cin.ignore(32767, '\n');
			cin.get();
			clear();
			main();
			break;
		}
		}
		break;
	}
	case 3:																						// Students Union
	{
	StudentsUnion:
		clear();
		cout << "\n < Students Union >\n\n";
		cout << " 1) Telegram Channel\n";
		cout << " 2) Instagram\n";
		cout << " 3) List of Clubs\n";
		cout << " 4) Main menu\n\n";
		cout << " Choose the section \32 ";
		cin >> number2;
		cout << endl << endl;
		switch (number2)
		{
		case 1:
		{
			clear();
			cout << "\n < Telegram Channel >";
			cout << endl << endl;
			cout << " Link to telegram channel \32 t.me/IUTYU " << endl;
			int index;
			cout << "\n\n 1) Back\n ";
			cin >> index;
			if (index == 1) {
				goto StudentsUnion;
			}
			break;
		}
		case 2:
		{
			clear();
			cout << "\n < Instagram >";
			cout << endl << endl;
			cout << " Link to Instagram page \32 https://www.instagram.com/iut__su " << endl;
			int index;
			cout << "\n\n 1) Back\n ";
			cin >> index;
			if (index == 1) {
				goto StudentsUnion;
			}
			break;
		}

		case 3:
		{
			clear();
			cout << "\n < List of Clubs >";
			cout << endl << endl;
			cout << " Link to the list of clubs \32 https://taplink.cc/iut__su " << endl;
			int index;
			cout << "\n\n 1) Back\n ";
			cin >> index;
			if (index == 1) {
				goto StudentsUnion;
			}
			break;
		}

		case 4:
		{
			clear();
			SupportSection();
			break;
		}
		default: {
			cout << endl;
			cout << " Please, choose only from given sections." << endl;
			cout << " We are so sad to close the section. : (" << endl;
			cout << " To return to the Main menu, tap to the keybord. ";
			cin.clear();
			cin.ignore(32767, '\n');
			cin.get();
			clear();
			main();
			break; }															    // Default Break Students Union
			   break;
		}
		break;
	}
	case 4:																						// Back
	{
		clear();
		main();
		break;
	}


	default: {																					// Default Break Students Support
		cout << endl;
		cout << " Please, choose only from given sections." << endl;
		cout << " We are so sad to close the section. : (" << endl;
		cout << " To return to the Main menu, tap to the keybord. ";
		cin.clear();
		cin.ignore(32767, '\n');
		cin.get();
		clear();
		main();
		break;  }
		   break;
	}

}

void id1() {
	int id;
	cout << "\n Please enter your student ID \32 U";
	cin >> id;
	if (id == 2110204 || id == 2110205 || id == 2110206 || id == 2110207 || id == 2110208 || id == 2110209 || id == 2110210 || id == 2110211 || id == 2110212 || id == 2110213) {
		cout << endl;
		cout << " Your group number is CIE-21-16." << endl;
		cout << endl;
		day();
	}
	else if (id == 2110214 || id == 2110215 || id == 2110216 || id == 2110217 || id == 2110218 || id == 2110219 || id == 2110220 || id == 2110221 || id == 2110222 || id == 2110223 || id == 2110224 || id == 2110225 || id == 2110226 || id == 2110227 || id == 2110228) {
		cout << endl;
		cout << " Your group number is CIE-21-17." << endl;
		cout << endl;
		day_1();
	}
	else if (id == 2110229 || id == 2110230 || id == 2110231 || id == 2110232 || id == 2110233) {
		cout << endl;
		cout << " Your group number is CIE-21-18." << endl;
		cout << endl;
		day_2();
	}
	else if (id == 2110234 || id == 2110235 || id == 2110236 || id == 2110237 || id == 2110238 || id == 2110239 || id == 2110240 || id == 2110241 || id == 2110242 || id == 2110243) {
		cout << endl;
		cout << " Your group number is CIE-21-19." << endl;
		cout << endl;
		day_2();
	}
	else if (id == 2110244 || id == 2110245 || id == 2110246 || id == 2110247 || id == 2110248 || id == 2110249 || id == 2110250 || id == 2110251 || id == 2110252 || id == 2110253) {
		cout << endl;
		cout << " Your group number is CIE-21-20." << endl;
		cout << endl;
		day_3();
	}
	else if (id == 2110254 || id == 2110255 || id == 2110256 || id == 2110257 || id == 2110258 || id == 2110259 || id == 2110260 || id == 2110261 || id == 2110262 || id == 2110263) {
		cout << endl;
		cout << " Your group number is CIE-21-21." << endl;
		cout << endl;
		day_4();
	}
	else if (id == 2110264 || id == 2110265 || id == 2110266 || id == 2110267 || id == 2110268 || id == 2110269 || id == 2110270 || id == 2110271 || id == 2110272 || id == 2110273) {
		cout << endl;
		cout << " Your group number is CIE-21-22." << endl;
		cout << endl;
		day_4();
	}
	else if (id == 2110274 || id == 2110275 || id == 2110276 || id == 2110277 || id == 2110278 || id == 2110279 || id == 2110280) {
		cout << endl;
		cout << " Your group number is CIE-21-23." << endl;
		cout << endl;
		day_5();
	}
	else if (id == 2110281 || id == 2110282 || id == 2110283 || id == 2110284 || id == 2110285 || id == 2110286 || id == 2110287 || id == 2110288 || id == 2110289 || id == 2110290 || id == 2110291 || id == 2110292 || id == 2110293 || id == 2110294 || id == 2110295 || id == 2110296 || id == 2110297 || id == 2110298 || id == 2110299 || id == 2110300 || id == 2110301 || id == 2110302) {
		cout << endl;
		cout << " Your group number is CIE-21-24." << endl;
		cout << endl;
		day_6();
	}
	else if (id == 2110001 || id == 2110002 || id == 2110003 || id == 2110004 || id == 2110005 || id == 2110006 || id == 2110007 || id == 2110008 || id == 2110009 || id == 2110010 || id == 2110011 || id == 2110012 || id == 2110013 || id == 2110014 || id == 2110015 || id == 2110016 || id == 2110017 || id == 2110018 || id == 2110019 || id == 2110020 || id == 2110021 || id == 2110022 || id == 2110023 || id == 2110024 || id == 2110025) {
		cout << endl;
		cout << " Your group number is CIE-21-01." << endl;
		cout << endl;
		day_7();
	}
	else if (id == 2110026 || id == 2110027 || id == 2110028 || id == 2110029 || id == 2110030) {
		cout << endl;
		cout << " Your group number is CIE-21-02." << endl;
		cout << endl;
		day_8();
	}
	else if (id == 2110031 || id == 2110032 || id == 2110033 || id == 2110034 || id == 2110035 || id == 2110036 || id == 2110037 || id == 2110038 || id == 2110039 || id == 2110040 || id == 2110041 || id == 2110042 || id == 2110043 || id == 2110044 || id == 2110045 || id == 2110046 || id == 2110047 || id == 2110048 || id == 2110049 || id == 2110050) {
		cout << endl;
		cout << " Your group number is CIE-21-03." << endl;
		cout << endl;
		day_9();
	}
	else if (id == 2110051 || id == 2110052 || id == 2110053 || id == 2110054 || id == 2110055 || id == 2110056 || id == 2110057 || id == 2110058 || id == 2110059 || id == 2110060) {
		cout << endl;
		cout << " Your group number is CIE-21-04." << endl;
		cout << endl;
		day_10();
	}
	else if (id == 2110061 || id == 2110062 || id == 2110063 || id == 2110064 || id == 2110065 || id == 2110066 || id == 2110067 || id == 2110068 || id == 2110069 || id == 2110070 || id == 2110071 || id == 2110072 || id == 2110073 || id == 2110074 || id == 2110075) {
		cout << endl;
		cout << " Your group number is CIE-21-05." << endl;
		cout << endl;
		day_11();
	}
	else if (id == 2110076 || id == 2110077 || id == 2110078 || id == 2110079 || id == 2110080) {
		cout << endl;
		cout << " Your group number is CIE-21-06." << endl;
		cout << endl;
		day_12();
	}
	else if (id == 2110081 || id == 2110082 || id == 2110083 || id == 2110084 || id == 2110085 || id == 2110086 || id == 2110087 || id == 2110088 || id == 2110089 || id == 2110090 || id == 2110091) {
		cout << endl;
		cout << " Your group number is CIE-21-07." << endl;
		cout << endl;
		day_12();
	}
	else if (id == 2110092 || id == 2110093 || id == 2110094 || id == 2110095 || id == 2110096 || id == 2110097 || id == 2110098 || id == 2110099 || id == 2110100 || id == 2110101) {
		cout << endl;
		cout << " Your group number is CIE-21-08." << endl;
		cout << endl;
		day_13();
	}
	else if (id == 2110102 || id == 2110103 || id == 2110104 || id == 2110105 || id == 2110106 || id == 2110107 || id == 2110108 || id == 2110109 || id == 2110110 || id == 2110111) {
		cout << endl;
		cout << " Your group number is CIE-21-09." << endl;
		cout << endl;
		day_14();
	}
	else if (id == 2110112 || id == 2110113 || id == 2110114 || id == 2110115 || id == 2110116 || id == 2110117 || id == 2110118 || id == 2110119 || id == 2110120 || id == 2110121) {
		cout << endl;
		cout << " Your group number is CIE-21-10." << endl;
		cout << endl;
		day_14();
	}
	else if (id == 2110122 || id == 2110123 || id == 2110124 || id == 2110125 || id == 2110126 || id == 2110127 || id == 2110128) {
		cout << endl;
		cout << " Your group number is CIE-21-11." << endl;
		cout << endl;
		day_15();
	}
	else if (id == 2110129 || id == 2110130 || id == 2110131 || id == 2110132 || id == 2110133 || id == 2110134 || id == 2110135 || id == 2110136 || id == 2110137 || id == 2110138 || id == 2110139 || id == 2110140 || id == 2110141 || id == 2110142 || id == 2110143 || id == 2110144 || id == 2110145 || id == 2110146 || id == 2110147 || id == 2110148 || id == 2110149 || id == 2110150 || id == 2110151 || id == 2110152 || id == 2110153) {
		cout << endl;
		cout << " Your group number is CIE-21-12." << endl;
		cout << endl;
		day_16();
	}
	else if (id == 2110154 || id == 2110155 || id == 2110156 || id == 2110157 || id == 2110158 || id == 2110159 || id == 2110160 || id == 2110161 || id == 2110162 || id == 2110163 || id == 2110164 || id == 2110165 || id == 2110166 || id == 2110167 || id == 2110168 || id == 2110169 || id == 2110170 || id == 2110171 || id == 2110172 || id == 2110173 || id == 2110174 || id == 2110175 || id == 2110176 || id == 2110177 || id == 2110178) {
		cout << endl;
		cout << " Your group number is CIE-21-13." << endl;
		cout << endl;
		day_17();
	}
	else if (id == 2110179 || id == 2110180 || id == 2110181 || id == 2110182 || id == 2110183) {
		cout << endl;
		cout << " Your group number is CIE-21-14." << endl;
		cout << endl;
		day_18();
	}
	else if (id == 2110185 || id == 2110186 || id == 2110187 || id == 2110188 || id == 2110189 || id == 2110190 || id == 2110191 || id == 2110192 || id == 2110193 || id == 2110194 || id == 2110195 || id == 2110196 || id == 2110197 || id == 2110198 || id == 2110199 || id == 2110200 || id == 2110201 || id == 2110202 || id == 2110203) {
		cout << endl;
		cout << " Your group number is CIE-21-15." << endl;
		cout << endl;
		day_19();
	}
	else {
		cout << " Your ID does not exist or we do not have your ID in our database." << endl;
		cout << "\n Try again..." << endl;
		cin.clear();
		cin.ignore(32767, '\n');
		cin.get();
		clear();
		id1();
	}
}
void day() {
	int day1;
	cout << " Please select the day schedule you want to see \37" << endl;
	cout << endl;
	cout << " 1) Monday" << endl;
	cout << " 2) Tuesday" << endl;
	cout << " 3) Wednesday" << endl;
	cout << " 4) Thursday" << endl;
	cout << " 5) Friday" << endl;
	cout << " 6) Main menu" << endl;
	cout << endl;
	cout << " Choose a day \32 ";
	cin >> day1;
	clear();
	switch (day1) {
	case 1:
		cout << "\n 1st lecture \32 Intro to IT (15.30-17.00) " << endl;
		cout << " 2nd lecture \32 Academic English (17.00-18.30) " << endl;
		break;
	case 2:
		cout << "\n 1st lecture \32 Physics (09.00-10.30) " << endl;
		cout << " 2nd lecture \32 Calculus (10.30-12.00) " << endl;
		cout << " 3rd lecture \32 Object Oriented Programming (12.00-13.30) " << endl;
		cout << " 4th lecture \32 Physics Experiment (13.30-15.30) " << endl;
		break;
	case 3:
		cout << "\n 1st lecture \32 Academic English (10.30-12.00) " << endl;
		cout << " 2nd lecture \32 Academic English Reading (14.00-16.00) " << endl;
		break;
	case 4:
		cout << "\n 1st lecture \32 Calculus (10.30-12.00) " << endl;
		cout << " 2nd lecture \32 Physics (13.30-15.00) " << endl;
		break;
	case 5:
		cout << "\n 1st lecture \32 Intro to IT (10.30-12.00)" << endl;
		cout << " 2nd lecture \32 Object Oriented Programming (12.00-13.30) " << endl;
		break;
	case 6:
		main();
		break;
	}
	int index;
	cout << "\n\n 1) Back\n ";
	cin >> index;
	switch (index)
	{
	case 1:
		clear();
		day();
		break;
	default:
		break;
	}

}
void day_1() {
	int day;
	cout << " Please select the day schedule you want to see \37" << endl;
	cout << endl;
	cout << " 1) Monday" << endl;
	cout << " 2) Tuesday" << endl;
	cout << " 3) Wednesday" << endl;
	cout << " 4) Thursday" << endl;
	cout << " 5) Friday" << endl;
	cout << " 6) Main menu" << endl;
	cout << endl;
	cout << " Choose a day \32 ";
	cin >> day;
	clear();
	switch (day) {
	case 1:
		cout << "\n 1st lecture \32 Intro to IT (15.30-17.00) " << endl;
		cout << " 2nd lecture \32 Academic English (17.00-18.30) " << endl;
		break;
	case 2:
		cout << "\n 1st lecture \32 Physics (09.00-10.30) " << endl;
		cout << " 2nd lecture \32 Calculus (10.30-12.00) " << endl;
		cout << " 3rd lecture \32 Object Oriented Programming (12.00-13.30) " << endl;
		break;
	case 3:
		cout << "\n 1st lecture \32 Academic English (10.30-12.00) " << endl;
		cout << " 2nd lecture \32 Academic English Reading (14.00-16.00) " << endl;
		break;
	case 4:
		cout << "\n 1st lecture \32 Calculus (10.30-12.00) " << endl;
		cout << " 2nd lecture \32 Physics (13.30-15.00) " << endl;
		cout << " 3rd lecture \32 Physics Experiment (15.00-17.00) " << endl;
		break;
	case 5:
		cout << "\n 1st lecture \32 Intro to IT (10.30-12.00)" << endl;
		cout << " 2nd lecture \32 Object Oriented Programming (12.00-13.30) " << endl;
		break;
	case 6:
		main();
		break;
	}
	int index;
	cout << "\n\n 1) Back\n ";
	cin >> index;
	switch (index)
	{
	case 1:
		clear();
		day_1();
		break;
	default:
		break;
	}
}
void day_2() {
	int day;
	cout << " Please select the day schedule you want to see \37" << endl;
	cout << endl;
	cout << " 1) Monday" << endl;
	cout << " 2) Tuesday" << endl;
	cout << " 3) Wednesday" << endl;
	cout << " 4) Thursday" << endl;
	cout << " 5) Friday" << endl;
	cout << " 6) Main menu" << endl;
	cout << endl;
	cout << " Choose a day \32 ";
	cin >> day;
	clear();
	switch (day) {
	case 1:
		cout << "\n 1st lecture \32 Calculus (12.00-13.30) " << endl;
		cout << " 2nd lecture \32 Intro to IT (15.30-17.00) " << endl;
		break;
	case 2:
		cout << "\n 1st lecture \32 Object Oriented Programming (12.00-13.30) " << endl;
		cout << " 2nd lecture \32 Academic English (13.30-15.00) " << endl;
		cout << " 3rd lecture \32 Academic English Reading (15.00-17.00) " << endl;
		break;
	case 3:
		cout << "\n 1st lecture \32 Physics (09.00-10.30) " << endl;
		cout << " 2nd lecture \32 Calculus (12.00-13.30) " << endl;
		break;
	case 4:
		cout << "\n 1st lecture \32 Academic English (13.30-15.00) " << endl;
		cout << " 2nd lecture \32 Physics Experiment (16.00-17.30) " << endl;
		break;
	case 5:
		cout << "\n 1st lecture \32 Intro to IT (10.30-12.00)" << endl;
		cout << " 2nd lecture \32 Object Oriented Programming (12.00-13.30) " << endl;
		cout << " 3rd lecture \32 Physics (13.30-15.00) " << endl;
		break;
	case 6:
		main();
		break;
	}
	int index;
	cout << "\n\n 1) Back\n ";
	cin >> index;
	switch (index)
	{
	case 1:
		clear();
		day_2();
		break;
	default:
		break;
	}
}
void day_3() {
	int day;
	cout << " Please select the day schedule you want to see \37" << endl;
	cout << endl;
	cout << " 1) Monday" << endl;
	cout << " 2) Tuesday" << endl;
	cout << " 3) Wednesday" << endl;
	cout << " 4) Thursday" << endl;
	cout << " 5) Friday" << endl;
	cout << " 6) Main menu" << endl;
	cout << endl;
	cout << " Choose a day \32 ";
	cin >> day;
	clear();
	switch (day) {
	case 1:
		cout << "\n 1st lecture \32 Calculus (12.00-13.30) " << endl;
		cout << " 2nd lecture \32 Physics Experiment (13.30-15.30) " << endl;
		cout << " 3rd lecture \32 Intro to IT (15.30-17.00) " << endl;
		break;
	case 2:
		cout << "\n 1st lecture \32 Object Oriented Programming (12.00-13.30) " << endl;
		cout << " 2nd lecture \32 Academic English (13.30-15.00) " << endl;
		cout << " 3rd lecture \32 Academic English Reading (15.00-17.00) " << endl;
		break;
	case 3:
		cout << "\n 1st lecture \32 Physics (09.00-10.30) " << endl;
		cout << " 2nd lecture \32 Calculus (12.00-13.30) " << endl;
		break;
	case 4:
		cout << "\n 1st lecture \32 Academic English (13.30-15.00) " << endl;
		break;
	case 5:
		cout << "\n 1st lecture \32 Intro to IT (10.30-12.00)" << endl;
		cout << " 2nd lecture \32 Object Oriented Programming (12.00-13.30) " << endl;
		cout << " 3rd lecture \32 Physics (13.30-15.00) " << endl;
		break;
	case 6:
		main();
		break;
	}
	int index;
	cout << "\n\n 1) Back\n ";
	cin >> index;
	switch (index)
	{
	case 1:
		clear();
		day_3();
		break;
	default:
		break;
	}
}
void day_4() {
	int day;
	cout << " Please select the day schedule you want to see \37" << endl;
	cout << endl;
	cout << " 1) Monday" << endl;
	cout << " 2) Tuesday" << endl;
	cout << " 3) Wednesday" << endl;
	cout << " 4) Thursday" << endl;
	cout << " 5) Friday" << endl;
	cout << " 6) Main menu" << endl;

	cout << endl;
	cout << " Choose a day \32 ";
	cin >> day;
	clear();
	switch (day) {
	case 1:
		cout << "\n 1st lecture \32 Calculus (12.00-13.30) " << endl;
		cout << " 2nd lecture \32 Physics Experiment (13.30-15.30) " << endl;
		break;
	case 2:
		cout << "\n 1st lecture \32 Intro to IT (12.00-13.30) " << endl;
		cout << " 2nd lecture \32 Academic English (13.30-15.00) " << endl;
		break;
	case 3:
		cout << "\n 1st lecture \32 Physics (09.00-10.30) " << endl;
		cout << " 2nd lecture \32 Calculus (12.00-13.30) " << endl;
		cout << " 3rd lecture \32 Object Oriented Programming (13.30-15.00) " << endl;
		cout << " 4th lecture \32 Object Oriented Programming (15.00-16.30) " << endl;
		break;
	case 4:
		cout << "\n 1st lecture: Academic English (12.00-13.30) " << endl;
		cout << " 2nd lecture: Intro to IT (13.30-15.00) " << endl;
		break;
	case 5:
		cout << "\n 1st lecture: Academic English Reading (11.00-13.00) " << endl;
		cout << " 2nd lecture: Physics (13.30-15.00) " << endl;
		break;
	case 6:
		main();
		break;
	}
	int index;
	cout << "\n\n 1) Back\n ";
	cin >> index;
	switch (index)
	{
	case 1:
		clear();
		day_4();
		break;
	default:
		break;
	}
}
void day_5() {
	int day;
	cout << " Please select the day schedule you want to see \37" << endl;
	cout << endl;
	cout << " 1) Monday" << endl;
	cout << " 2) Tuesday" << endl;
	cout << " 3) Wednesday" << endl;
	cout << " 4) Thursday" << endl;
	cout << " 5) Friday" << endl;
	cout << " 6) Main menu" << endl;

	cout << endl;
	cout << "Choose a day \32 ";
	cin >> day;
	clear();
	switch (day) {
	case 1:
		cout << "\n 1st lecture \32 Physics Experiment (10.00-12.00) " << endl;
		cout << " 2nd lecture \32 Calculus (12.00-13.30) " << endl;
		break;
	case 2:
		cout << "\n 1st lecture \32 Intro to IT (12.00-13.30) " << endl;
		cout << " 2nd lecture \32 Academic English (13.30-15.00) " << endl;
		break;
	case 3:
		cout << "\n 1st lecture \32 Physics (09.00-10.30) " << endl;
		cout << " 2nd lecture \32 Calculus (12.00-13.30) " << endl;
		cout << " 3rd lecture \32 Object Oriented Programming (13.30-15.00) " << endl;
		cout << " 4th lecture \32 Object Oriented Programming (15.00-16.30) " << endl;
		break;
	case 4:
		cout << "\n 1st lecture \32 Academic English (12.00-13.30) " << endl;
		cout << " 2nd lecture \32 Intro to IT (13.30-15.00) " << endl;
		break;
	case 5:
		cout << "\n 1st lecture \32 Academic English Reading (11.00-13.00) " << endl;
		cout << " 2nd lecture \32 Physics (13.30-15.00) " << endl;
		break;
	case 6:
		main();
		break;
	}
	int index;
	cout << "\n\n 1) Back\n ";
	cin >> index;
	switch (index)
	{
	case 1:
		clear();
		day_5();
		break;
	default:
		break;
	}
}
void day_6() {
	int day;
	cout << " Please select the day schedule you want to see \37" << endl;
	cout << endl;
	cout << " 1) Monday" << endl;
	cout << " 2) Tuesday" << endl;
	cout << " 3) Wednesday" << endl;
	cout << " 4) Thursday" << endl;
	cout << " 5) Friday" << endl;
	cout << " 6) Main menu" << endl;

	cout << endl;
	cout << " Choose a day \32 ";
	cin >> day;
	clear();
	switch (day) {
	case 1:
		cout << "\n 1st lecture \32 Physics Experiment (10.00-12.00) " << endl;
		cout << " 2nd lecture \32 Calculus (12.00-13.30) " << endl;
		break;
	case 2:
		cout << "\n 1st lecture \32 Intro to IT (12.00-13.30) " << endl;
		cout << " 2nd lecture \32 Academic English Reading (13.30-15.30) " << endl;
		break;
	case 3:
		cout << "\n 1st lecture \32 Physics (09.00-10.30) " << endl;
		cout << " 2nd lecture \32 Calculus (12.00-13.30) " << endl;
		cout << " 3rd lecture \32 Object Oriented Programming (13.30-15.00) " << endl;
		cout << " 4th lecture \32 Object Oriented Programming (15.00-16.30) " << endl;
		break;
	case 4:
		cout << "\n 1st lecture \32 Academic English (12.00-13.30) " << endl;
		cout << " 2nd lecture \32 Intro to IT (13.30-15.00) " << endl;
		break;
	case 5:
		cout << "\n 1st lecture \32 Academic English (12.00-13.30) " << endl;
		cout << " 2nd lecture \32 Physics (13.30-15.00) " << endl;
		break;
	case 6:
		main();
		break;
	}
	int index;
	cout << "\n\n 1) Back\n ";
	cin >> index;
	switch (index)
	{
	case 1:
		clear();
		day_6();
		break;
	default:
		break;
	}
}
void day_7() {
	int day;
	cout << " Please select the day schedule you want to see \37" << endl;
	cout << endl;
	cout << " 1) Monday" << endl;
	cout << " 2) Tuesday" << endl;
	cout << " 3) Wednesday" << endl;
	cout << " 4) Thursday" << endl;
	cout << " 5) Friday" << endl;
	cout << " 6) Main menu" << endl;

	cout << endl;
	cout << " Choose a day \32 ";
	cin >> day;
	clear();
	switch (day) {
	case 1:
		cout << "\n 1st lecture \32 Physics (12.00-13.30) " << endl;
		cout << " 2nd lecture \32 Academic English (13.30-15.00) " << endl;
		cout << " 3rd lecture \32 Pre-Calculus (15.00-16.30) " << endl;
		cout << " 4th lecture \32 Intro to IT (17.00-18.30) " << endl;
		break;
	case 2:
		cout << "\n 1st lecture \32 Physics Experiment (10.00-12.00) " << endl;
		cout << " 2nd lecture \32 Object Oriented Programming (13.30-15.00) " << endl;
		break;
	case 3:
		cout << "\n 1st lecture \32 Academic English (14.30-15.30) " << endl;
		cout << " 2nd lecture \32 Physics (16.30-17.30) " << endl;
		break;
	case 4:
		cout << "\n 1st lecture \32 Object Oriented Programming (09.00-10.30) " << endl;
		cout << " 2nd lecture \32 Pre-Calculus (12.00-13.30) " << endl;
		break;
	case 5:
		cout << "\n 1st lecture \32 Academic English Reading (09.00-11.00) " << endl;
		cout << " 2nd lecture \32 Intro to IT (12.00-13.30) " << endl;
		break;
	case 6:
		main();
		break;
	}
	int index;
	cout << "\n\n 1) Back\n ";
	cin >> index;
	switch (index)
	{
	case 1:
		clear();
		day_7();
		break;
	default:
		break;
	}
}
void day_8() {
	int day;
	cout << " Please select the day schedule you want to see \37" << endl;
	cout << endl;
	cout << " 1) Monday" << endl;
	cout << " 2) Tuesday" << endl;
	cout << " 3) Wednesday" << endl;
	cout << " 4) Thursday" << endl;
	cout << " 5) Friday" << endl;
	cout << " 6) Main menu" << endl;

	cout << endl;
	cout << " Choose a day \32 ";
	cin >> day;
	clear();
	switch (day) {
	case 1:
		cout << "\n 1st lecture \32 Physics (12.00-13.30) " << endl;
		cout << " 2nd lecture \32 Academic English (13.30-15.00) " << endl;
		cout << " 3rd lecture \32 Pre-Calculus (15.00-16.30) " << endl;
		cout << " 4th lecture \32 Intro to IT (17.00-18.30) " << endl;
		break;
	case 2:
		cout << "\n 1st lecture \32 Physics Experiment (10.00-12.00) " << endl;
		cout << " 2nd lecture \32 Object Oriented Programming (13.30-15.00) " << endl;
		break;
	case 3:
		cout << "\n 1st lecture \32 Academic English (13.30-15.00) " << endl;
		cout << " 2nd lecture \32 Physics (16.30-17.30) " << endl;
		break;
	case 4:
		cout << "\n 1st lecture \32 Object Oriented Programming (09.00-10.30) " << endl;
		cout << " 2nd lecture \32 Pre-Calculus (12.00-13.30) " << endl;
		break;
	case 5:
		cout << "\n 1st lecture \32 Intro to IT (12.00-13.30) " << endl;
		cout << " 2nd lecture \32 Academic English Reading (13.30-15.30) " << endl;
		break;
	case 6:
		main();
		break;
	}
	int index;
	cout << "\n\n 1) Back\n ";
	cin >> index;
	switch (index)
	{
	case 1:
		clear();
		day_8();
		break;
	default:
		break;
	}
}
void day_9() {
	int day;
	cout << " Please select the day schedule you want to see \37" << endl;
	cout << endl;
	cout << " 1) Monday" << endl;
	cout << " 2) Tuesday" << endl;
	cout << " 3) Wednesday" << endl;
	cout << " 4) Thursday" << endl;
	cout << " 5) Friday" << endl;
	cout << " 6) Main menu" << endl;

	cout << endl;
	cout << " Choose a day \32 ";
	cin >> day;
	clear();
	switch (day) {
	case 1:
		cout << "\n 1st lecture \32 Physics (12.00-13.30) " << endl;
		cout << " 2nd lecture \32 Academic English (13.30-15.00) " << endl;
		cout << " 3rd lecture \32 Pre-Calculus (15.00-16.30) " << endl;
		cout << " 4th lecture: Intro to IT (17.00-18.30) " << endl;
		break;
	case 2:
		cout << "\n 1st lecture \32 Object Oriented Programming (13.30-15.00) " << endl;
		break;
	case 3:
		cout << "\n 1st lecture \32 Academic English (13.30-15.00) " << endl;
		cout << " 2nd lecture \32 Physics (16.30-18.00) " << endl;
		break;
	case 4:
		cout << "\n 1st lecture \32 Object Oriented Programming (09.00-10.30) " << endl;
		cout << " 2nd lecture \32 Pre-Calculus (12.00-13.30) " << endl;
		break;
	case 5:
		cout << "\n 1st lecture \32 Physics Experiment (09.00-11.00) " << endl;
		cout << " 2nd lecture \32 Intro to IT (12.00-13.30) " << endl;
		cout << " 3rd lecture \32 Academic English Reading (13.30-15.30) " << endl;
		break;
	case 6:
		main();
		break;
	}
	int index;
	cout << "\n\n 1) Back\n ";
	cin >> index;
	switch (index)
	{
	case 1:
		clear();
		day_9();
		break;
	default:
		break;
	}
}
void day_10() {
	int day;
	cout << " Please select the day schedule you want to see \37" << endl;
	cout << endl;
	cout << " 1) Monday" << endl;
	cout << " 2) Tuesday" << endl;
	cout << " 3) Wednesday" << endl;
	cout << " 4) Thursday" << endl;
	cout << " 5) Friday" << endl;
	cout << " 6) Main menu" << endl;

	cout << endl;
	cout << " Choose a day \32 ";
	cin >> day;
	clear();
	switch (day) {
	case 1:
		cout << "\n 1st lecture \32 Physics (12.00-13.30) " << endl;
		cout << " 2nd lecture \32 Pre-Calculus (15.00-16.30) " << endl;
		break;
	case 2:
		cout << "\n 1st lecture \32 Academic English Reading (09.00-11.00) " << endl;
		cout << " 2nd lecture \32 Intro to IT (15.30-17.00) " << endl;
		cout << " 3rd lecture \32 Object Oriented Programming (17.00-18.30) " << endl;
		break;
	case 3:
		cout << "\n 1st lecture \32 Academic English (12.30-14.00) " << endl;
		cout << " 2nd lecture \32 Physics (16.00-17.30) " << endl;
		break;
	case 4:
		cout << "\n 1st lecture \32 Academic English (09.00-10.30) " << endl;
		cout << " 2nd lecture \32 Object Oriented Programming (10.30-12.00) " << endl;
		cout << " 3rd lecture \32 Pre-Calculus (12.00-13.30) " << endl;
		break;
	case 5:
		cout << "\n 1st lecture \32 Physics Experiment (09.00-11.00) " << endl;
		cout << " 2nd lecture \32 Intro to IT (13.30-15.00) " << endl;
		break;
	case 6:
		main();
		break;
	}
	int index;
	cout << "\n\n 1) Back\n ";
	cin >> index;
	switch (index)
	{
	case 1:
		clear();
		day_10();
		break;
	default:
		break;
	}
}
void day_11() {
	int day;
	cout << " Please select the day schedule you want to see \37" << endl;
	cout << endl;
	cout << " 1) Monday" << endl;
	cout << " 2) Tuesday" << endl;
	cout << " 3) Wednesday" << endl;
	cout << " 4) Thursday" << endl;
	cout << " 5) Friday" << endl;
	cout << " 6) Main menu" << endl;

	cout << endl;
	cout << " Choose a day \32 ";
	cin >> day;
	clear();
	switch (day) {
	case 1:
		cout << "\n 1st lecture \32 Physics (12.00-13.30) " << endl;
		cout << " 2nd lecture \32 Pre-Calculus (15.00-16.30) " << endl;
		break;
	case 2:
		cout << "\n 1st lecture \32 Academic English Reading (09.00-11.00) " << endl;
		cout << " 2nd lecture \32 Intro to IT (15.30-17.00) " << endl;
		cout << " 3rd lecture \32 Object Oriented Programming (17.00-18.30) " << endl;
		break;
	case 3:
		cout << "\n 1st lecture \32 Academic English (12.30-14.00) " << endl;
		cout << " 2nd lecture \32 Physics (16.00-17.30) " << endl;
		break;
	case 4:
		cout << "\n 1st lecture \32 Academic English (09.00-10.30) " << endl;
		cout << " 2nd lecture \32 Object Oriented Programming (10.30-12.00) " << endl;
		cout << " 3rd lecture \32 Pre-Calculus (12.00-13.30) " << endl;
		break;
	case 5:
		cout << "\n 1st lecture \32 Physics Experiment (11.00-13.00) " << endl;
		cout << " 2nd lecture \32 Intro to IT (13.30-15.00) " << endl;
		break;
	case 6:
		main();
		break;
	}
	int index;
	cout << "\n\n 1) Back\n ";
	cin >> index;
	switch (index)
	{
	case 1:
		clear();
		day_11();
		break;
	default:
		break;
	}
}
void day_12() {
	int day;
	cout << " Please select the day schedule you want to see \37" << endl;
	cout << endl;
	cout << " 1) Monday" << endl;
	cout << " 2) Tuesday" << endl;
	cout << " 3) Wednesday" << endl;
	cout << " 4) Thursday" << endl;
	cout << " 5) Friday" << endl;
	cout << " 6) Main menu" << endl;

	cout << endl;
	cout << " Choose a day \32 ";
	cin >> day;
	clear();
	switch (day) {
	case 1:
		cout << "\n No Lectures." << endl;
		break;
	case 2:
		cout << "\n 1st lecture \32 Physics (12.00-13.30) " << endl;
		cout << " 2nd lecture \32 Intro to IT (15.30-17.00) " << endl;
		cout << " 3rd lecture \32 Object Oriented Programming (17.00-18.30) " << endl;
		break;
	case 3:
		cout << "\n 1st lecture \32 Academic English Reading (11.00-13.00) " << endl;
		cout << " 2nd lecture \32 Calculus (16.00-17.30) " << endl;
		break;
	case 4:
		cout << "\n 1st lecture \32 Calculus (09.00-10.30) " << endl;
		cout << " 2nd lecture \32 Object Oriented Programming (10.30-12.00) " << endl;
		cout << " 3rd lecture \32 Physics (12.00-13.30) " << endl;
		cout << " 4th lecture \32 Academic English (15.00-16.30) " << endl;
		break;
	case 5:
		cout << "\n 1st lecture \32 Academic English (09.00-10.30) " << endl;
		cout << " 2nd lecture \32 Physics Experiment (11.00-13.00) " << endl;
		cout << " 3rd lecture \32 Intro to IT (13.30-15.00) " << endl;
		break;
	case 6:
		main();
		break;
	}
	int index;
	cout << "\n\n 1) Back\n ";
	cin >> index;
	switch (index)
	{
	case 1:
		clear();
		day_12();
		break;
	default:
		break;
	}
}
void day_13() {
	int day;
	cout << " Please select the day schedule you want to see \37" << endl;
	cout << endl;
	cout << " 1) Monday" << endl;
	cout << " 2) Tuesday" << endl;
	cout << " 3) Wednesday" << endl;
	cout << " 4) Thursday" << endl;
	cout << " 5) Friday" << endl;
	cout << " 6) Main menu" << endl;

	cout << endl;
	cout << " Choose a day \32 ";
	cin >> day;
	clear();
	switch (day) {
	case 1:
		cout << "\n No Lectures." << endl;
		break;
	case 2:
		cout << "\n 1st lecture \32 Physics (12.00-13.30) " << endl;
		cout << " 2nd lecture \32 Intro to IT (15.30-17.00) " << endl;
		cout << " 3rd lecture \32 Object Oriented Programming (17.00-18.30) " << endl;
		break;
	case 3:
		cout << "\n 1st lecture \32 Academic English Reading (11.00-13.00) " << endl;
		cout << " 2nd lecture \32 Physics Experiment (14.00-16.00) " << endl;
		cout << " 3rd lecture \32 Calculus (16.00-17.30) " << endl;
		break;
	case 4:
		cout << "\n 1st lecture \32 Calculus (09.00-10.30) " << endl;
		cout << " 2nd lecture \32 Object Oriented Programming (10.30-12.00) " << endl;
		cout << " 3rd lecture \32 Physics (12.00-13.30) " << endl;
		cout << " 4th lecture \32 Academic English (15.00-16.30) " << endl;
		break;
	case 5:
		cout << "\n 1st lecture \32 Academic English (09.00-10.30) " << endl;
		cout << " 2nd lecture \32 Intro to IT (13.30-15.00) " << endl;
		break;
	case 6:
		main();
		break;
	}
	int index;
	cout << "\n\n 1) Back\n ";
	cin >> index;
	switch (index)
	{
	case 1:
		clear();
		day_13();
		break;
	default:
		break;
	}
}
void day_14() {
	int day;
	cout << " Please select the day schedule you want to see \37" << endl;
	cout << endl;
	cout << " 1) Monday" << endl;
	cout << " 2) Tuesday" << endl;
	cout << " 3) Wednesday" << endl;
	cout << " 4) Thursday" << endl;
	cout << " 5) Friday" << endl;
	cout << " 6) Main menu" << endl;

	cout << endl;
	cout << " Choose a day \32 ";
	cin >> day;
	clear();
	switch (day) {
	case 1:
		cout << "\n 1st lecture \32 Academic English  (12.00-13.30) " << endl;
		cout << " 2nd lecture \32 Object Oriented Programming (13.30-15.00) " << endl;
		cout << " 3rd lecture \32 Academic English Reading (15.00-17.00) " << endl;
		break;
	case 2:
		cout << "\n 1st lecture \32 Physics (12.00-13.30) " << endl;
		cout << " 2nd lecture \32 Intro to IT (14.00-15.30) " << endl;
		break;
	case 3:
		cout << "\n 1st lecture \32 Academic English (09.00-10.30) " << endl;
		cout << " 2nd lecture \32 Object Oriented Programming (10.30-12.00) " << endl;
		cout << " 3rd lecture \32 Physics Experiment (14.00-16.00) " << endl;
		cout << " 4th lecture \32 Calculus (16.00-17.30) " << endl;
		break;
	case 4:
		cout << "\n 1st lecture \32 Calculus (09.00-10.30) " << endl;
		cout << " 2nd lecture \32 Intro to IT (10.30-12.00) " << endl;
		cout << " 3rd lecture \32 Physics (12.00-13.30) " << endl;
		break;
	case 5:
		cout << "\n No Lectures." << endl;
		break;
	case 6:
		main();
		break;
	}
	int index;
	cout << "\n\n 1) Back\n ";
	cin >> index;
	switch (index)
	{
	case 1:
		clear();
		day_14();
		break;
	default:
		break;
	}
}
void day_15() {
	int day;
	cout << " Please select the day schedule you want to see \37" << endl;
	cout << endl;
	cout << " 1) Monday" << endl;
	cout << " 2) Tuesday" << endl;
	cout << " 3) Wednesday" << endl;
	cout << " 4) Thursday" << endl;
	cout << " 5) Friday" << endl;
	cout << " 6) Main menu" << endl;

	cout << endl;
	cout << " Choose a day \32 ";
	cin >> day;
	clear();
	switch (day) {
	case 1:
		cout << "\n 1st lecture \32 Academic English  (12.00-13.30) " << endl;
		cout << " 2nd lecture \32 Object Oriented Programming (13.30-15.00) " << endl;
		cout << " 3rd lecture \32 Academic English Reading (15.00-17.00) " << endl;
		break;
	case 2:
		cout << "\n 1st lecture \32 Physics (12.00-13.30) " << endl;
		cout << " 2nd lecture \32 Intro to IT (14.00-15.30) " << endl;
		cout << " 3rd lecture \32 Physics Experiment (16.00-18.00) " << endl;
		break;
	case 3:
		cout << "\n 1st lecture \32 Academic English (09.00-10.30) " << endl;
		cout << " 2nd lecture \32 Object Oriented Programming (10.30-12.00) " << endl;
		cout << " 3rd lecture \32 Calculus (16.00-17.30) " << endl;
		break;
	case 4:
		cout << "\n 1st lecture \32 Calculus (09.00-10.30) " << endl;
		cout << " 2nd lecture \32 Intro to IT (10.30-12.00) " << endl;
		cout << " 3rd lecture \32 Physics (12.00-13.30) " << endl;
		break;
	case 5:
		cout << "\n No Lectures." << endl;
		break;
	case 6:
		main();
		break;
	}
	int index;
	cout << "\n\n 1) Back\n ";
	cin >> index;
	switch (index)
	{
	case 1:
		clear();
		day_15();
		break;
	default:
		break;
	}
}
void day_16() {
	int day;
	cout << " Please select the day schedule you want to see \37" << endl;
	cout << endl;
	cout << " 1) Monday" << endl;
	cout << " 2) Tuesday" << endl;
	cout << " 3) Wednesday" << endl;
	cout << " 4) Thursday" << endl;
	cout << " 5) Friday" << endl;
	cout << " 6) Main menu" << endl;

	cout << endl;
	cout << " Choose a day \32 ";
	cin >> day;
	clear();
	switch (day) {
	case 1:
		cout << "\n 1st lecture \32 Object Oriented Programming (13.30-15.00) " << endl;
		cout << " 2nd lecture \32 Academic English Reading (15.00-17.00) " << endl;
		break;
	case 2:
		cout << "\n 1st lecture \32 Academic English (10.30-12.00) " << endl;
		cout << " 2nd lecture \32 Physics (12.00-13.30) " << endl;
		cout << " 3rd lecture \32 Intro to IT (14.00-15.30) " << endl;
		cout << " 4th lecture \32 Physics Experiment (16.00-18.00) " << endl;
		break;
	case 3:
		cout << "\n 1st lecture \32 Object Oriented Programming (10.30-12.00) " << endl;
		cout << " 2nd lecture \32 Academic English (12.00-13.30) " << endl;
		cout << " 3rd lecture \32 Calculus (16.00-17.30) " << endl;
		break;
	case 4:
		cout << "\n 1st lecture \32 Calculus (09.00-10.30) " << endl;
		cout << " 2nd lecture \32 Intro to IT (10.30-12.00) " << endl;
		cout << " 3rd lecture \32 Physics (12.00-13.30) " << endl;
		break;
	case 5:
		cout << "\n No Lectures." << endl;
		break;
	case 6:
		main();
		break;
	}
	int index;
	cout << "\n\n 1) Back\n ";
	cin >> index;
	switch (index)
	{
	case 1:
		clear();
		day_16();
		break;
	default:
		break;
	}
}
void day_17() {
	int day;
	cout << " Please select the day schedule you want to see \37" << endl;
	cout << endl;
	cout << " 1) Monday" << endl;
	cout << " 2) Tuesday" << endl;
	cout << " 3) Wednesday" << endl;
	cout << " 4) Thursday" << endl;
	cout << " 5) Friday" << endl;
	cout << " 6) Main menu" << endl;

	cout << endl;
	cout << " Choose a day \32 ";
	cin >> day;
	clear();
	switch (day) {
	case 1:
		cout << "\n 1st lecture \32 Academic English (10.30-12.00) " << endl;
		cout << " 2nd lecture \32 Academic English Reading (12.00-14.00) " << endl;
		cout << " 3rd lecture \32 Object Oriented Programming (15.00-16.30) " << endl;
		break;
	case 2:
		cout << "\n 1st lecture \32 Physics (09.00-10.30) " << endl;
		cout << " 2nd lecture \32 Calculus (10.30-12.00) " << endl;
		cout << " 3rd lecture \32 Academic English (12.00-13.30) " << endl;
		break;
	case 3:
		cout << "\n 1st lecture \32 Physics Experiment (11.00-13.00) " << endl;
		cout << " 2nd lecture \32 Intro to It (13.30-15.00) " << endl;
		break;
	case 4:
		cout << "\n 1st lecture \32 Calculus (10.30-12.00) " << endl;
		cout << " 2nd lecture \32 Intro to IT (12.00-13.30) " << endl;
		cout << " 3rd lecture \32 Physics (13.30-15.00) " << endl;
		break;
	case 5:
		cout << "\n 1st lecture \32 Object Oriented Programming (09.00-10.30) " << endl;
		break;
	case 6:
		main();
		break;
	}
	int index;
	cout << "\n\n 1) Back\n ";
	cin >> index;
	switch (index)
	{
	case 1:
		clear();
		day_17();
		break;
	default:
		break;
	}
}
void day_18() {
	int day;
	cout << " Please select the day schedule you want to see \37" << endl;
	cout << endl;
	cout << " 1) Monday" << endl;
	cout << " 2) Tuesday" << endl;
	cout << " 3) Wednesday" << endl;
	cout << " 4) Thursday" << endl;
	cout << " 5) Friday" << endl;
	cout << " 6) Main menu" << endl;

	cout << endl;
	cout << " Choose a day \32 ";
	cin >> day;
	clear();
	switch (day) {
	case 1:
		cout << "\n 1st lecture \32 Academic English (10.30-12.00) " << endl;
		cout << " 2nd lecture \32 Academic English Reading (12.00-14.00) " << endl;
		cout << " 3rd lecture \32 Object Oriented Programming (15.00-16.30) " << endl;
		break;
	case 2:
		cout << "\n 1st lecture \32 Physics (09.00-10.30) " << endl;
		cout << " 2nd lecture \32 Calculus (10.30-12.00) " << endl;
		break;
	case 3:
		cout << "\n 1st lecture \32 Physics Experiment (11.00-13.00) " << endl;
		cout << " 2nd lecture \32 Intro to It (13.30-15.00) " << endl;
		break;
	case 4:
		cout << "\n 1st lecture \32 Calculus (10.30-12.00) " << endl;
		cout << " 2nd lecture \32 Intro to IT (12.00-13.30) " << endl;
		cout << " 3rd lecture \32 Physics (13.30-15.00) " << endl;
		break;
	case 5:
		cout << "\n 1st lecture \32 Object Oriented Programming (09.00-10.30) " << endl;
		cout << " 2nd lecture \32 Academic English (10.30-12.00) " << endl;
		break;
	case 6:
		main();
		break;
	}
	int index;
	cout << "\n\n 1) Back\n ";
	cin >> index;
	switch (index)
	{
	case 1:
		clear();
		day_18();
		break;
	default:
		break;
	}
}
void day_19() {
	int day;
	cout << " Please select the day schedule you want to see \37" << endl;
	cout << endl;
	cout << " 1) Monday" << endl;
	cout << " 2) Tuesday" << endl;
	cout << " 3) Wednesday" << endl;
	cout << " 4) Thursday" << endl;
	cout << " 5) Friday" << endl;
	cout << " 6) Main menu" << endl;

	cout << endl;
	cout << " Choose a day \32 ";
	cin >> day;
	clear();
	switch (day) {
	case 1:
		cout << "\n 1st lecture \32 Academic English (10.30-12.00) " << endl;
		cout << " 2nd lecture \32 Academic English Reading (12.00-14.00) " << endl;
		cout << " 3rd lecture \32 Object Oriented Programming (15.00-16.30) " << endl;
		break;
	case 2:
		cout << "\n 1st lecture \32 Physics (09.00-10.30) " << endl;
		cout << " 2nd lecture \32 Calculus (10.30-12.00) " << endl;
		cout << " 3rd lecture \32 Physics Experiment (13.30-15.30) " << endl;
		break;
	case 3:
		cout << "\n 1st lecture \32 Intro to It (13.30-15.00) " << endl;
		break;
	case 4:
		cout << "\n 1st lecture \32 Calculus (10.30-12.00) " << endl;
		cout << " 2nd lecture \32 Intro to IT (12.00-13.30) " << endl;
		cout << " 3rd lecture \32 Physics (13.30-15.00) " << endl;
		break;
	case 5:
		cout << "\n 1st lecture \32 Object Oriented Programming (09.00-10.30) " << endl;
		cout << " 2nd lecture \32 Academic English (10.30-12.00) " << endl;
		break;
	case 6:
		main();
		break;
	}
	int index;
	cout << "\n\n 1) Back\n ";
	cin >> index;
	switch (index)
	{
	case 1:
		clear();
		day_19();
		break;
	default:
		break;
	}
}

void main_1()
{
	int opr;
	do
	{
		cout << "\n Select any operation from the Calculator \37\n"
			"\n 1) Addition"
			"\n 2) Subtraction"
			"\n 3) Multiplication"
			"\n 4) Division"
			"\n 5) Power"
			"\n 6) Factorial"
			"\n 7) Square Root"
			"\n 8) Converter"
			"\n 9) Trigonometry"
			"\n 10) Exit"
			"\n \n Make a choice \32 ";
		cin >> opr;

		switch (opr)
		{
		case 1:
			clear();
			add();
			break;
		case 2:
			sub();
			break;
		case 3:
			mult();
			break;
		case 4:
			division();
			break;
		case 5:
			pow();
			break;
		case 6:
			factorial();
			break;
		case 7:
			srt();
			break;
		case 8:
			clear();
			convert();
			break;
		case 9:
			trig();
			break;
		case 10:
			clear();
			main();
			break;
		default:
			cout << "\n Error!\n";
			break;
		}
		cout << "\n\26\26\26\26\26\26\26\26\26\26\26\26\26\26\26\26\26\26\26\26\26\26\26\26\26\26\26\26\26\26\26\26\26\26\26\26\26\26\26\26\26\26\n";
	} while (opr != 10);
}


void add()
{
	float n, sum = 0, i, number;
	cout << " \n How many numbers you want to add: ";
	cin >> n;
	cout << " \n Please enter the number one by one \37 \n\n";
	for (i = 1; i <= n; i++)
	{
		cin >> number;
		sum = sum + number;
	}
	cout << " \n Sum of the numbers = " << sum << endl;
}
void sub()
{
	float num1, num2, z;
	cout << " \n Enter the first number = ";
	cin >> num1;
	cout << " \n Enter the second number = ";
	cin >> num2;
	z = num1 - num2;
	cout << " \n Subtraction of the number = " << z << endl;
}
void division()
{
	float num1, num2, div = 0;
	cout << " \n Enter the first number = ";
	cin >> num1;
	cout << " \n Enter the second number = ";
	cin >> num2;
	while (num2 == 0)
	{
		cout << " \n Divisor can't be zero"
			" \n Please enter the divisor once again: ";
		cin >> num2;
	}
	div = num1 / num2;
	cout << " \n Division of two numbers = " << div << endl;
}
void factorial()
{
	int n;
	cout << " \n Enter the number to calculate factorial: ";
	cin >> n;
	if (n == 0)
		cout << " \n The result of " << n << "!= " << 1;
	int i = n, fact = 1;
	while (n / i != n) {
		fact = fact * i;
		i--;
	}
	cout << " \n The result of " << n << "!= " << fact << endl;
}
void mult()
{
	float n, multi = 1, i, number;
	cout << " \n How many numbers you want to multiply: ";
	cin >> n;
	cout << " \n Please enter the number one by one \37 \n\n";
	for (i = 1; i <= n; i++)
	{
		cin >> number;
		multi *= number;
	}
	cout << " \n Multiplication of the numbers = " << multi << endl;
}
void srt()
{
	float q;
	float num1;
	cout << " \n Enter the number to find the Square Root: ";
	cin >> num1;
	q = sqrt(num1);
	cout << " \n Square Root of " << num1 << " is " << q << endl;
}
void pow()
{
	int base, pow, result = 1, var;
	cout << " \n Please enter the base: ";
	cin >> base;
	cout << " \n Please enter the power: ";
	cin >> pow;
	var = pow;
	while (pow > 0)
	{
		result *= base;
		pow--;
	}
	pow = var;
	cout << " \n Number " << base << " to the power of " << pow << ": " << result << endl;
}


void time() {

	float h, m, s, sum;
	cout << " Program to convert time to minutes " << endl;
	cout << " Enter hours: ";
	cin >> h;
	cout << " Enter minutes: ";
	cin >> m;
	cout << " Enter seconds: ";
	cin >> s;
	if (h < 0 || m < 0 || s < 0)
		cout << " Negative numbers cannot be converted." << endl;
	else {
		h = h * 3600;
		m = m * 60;
		sum = h + m + s;
		cout << " Time in seconds: " << sum << endl;
	}
}
void length() {

	float m, dm, sm, mm, sum;
	cout << " Program to convert time to seconds " << endl;
	cout << " Enter meters: ";
	cin >> m;
	cout << " Enter decimeters: ";
	cin >> dm;
	cout << " Enter santimeters: ";
	cin >> sm;
	cout << " Enter millimeters: ";
	cin >> mm;
	if (m < 0 || dm < 0 || sm < 0 || mm < 0)
		cout << " Negative numbers cannot be converted." << endl;
	else {
		dm /= 10;
		sm /= 100;
		mm /= 1000;
		sum = dm + sm + mm + m;
		cout << " Length in meters: " << sum << endl;
	}
}
void volume() {

	float m_3, dm_3, sm_3, mm_3, sum;
	cout << " Program to convert volume to meters^3 " << endl;
	cout << " Enter meters^3: ";
	cin >> m_3;
	cout << " Enter decimeters^3: ";
	cin >> dm_3;
	cout << " Enter santimeters^3: ";
	cin >> sm_3;
	cout << " Enter millimeters^3: ";
	cin >> mm_3;
	if (m_3 < 0 || dm_3 < 0 || sm_3 < 0 || mm_3 < 0)
		cout << " Negative numbers cannot be converted." << endl;
	else {
		dm_3 /= 1000;
		sm_3 /= 1000000;
		mm_3 /= 1000000000;
		sum = dm_3 + sm_3 + mm_3 + m_3;
		cout << " Volume in meters^3: " << sum << endl;
	}
}
void temp() {

	float x;
	char y;
	cout << " Enter temperature: ";
	cin >> x;
	cout << " If it is in Farenheit, print F; If in Celsius, print C: ";
	cin >> y;
	if (y == 'C') {
		cout << " Temperature, converted to Farenheit: " << (x * 9 / 5) + 32 << endl;
	}
	else if (y == 'F') {
		cout << " Temperature, converted to Celsius: " << (x - 32) * 5 / 9 << endl;
	}
}
void area() {

	float m_2, dm_2, sm_2, mm_2, sum;
	cout << " Program to convert area to meters^2 " << endl;
	cout << " Enter meters^2: ";
	cin >> m_2;
	cout << " Enter decimeters^2: ";
	cin >> dm_2;
	cout << " Enter santimeters^2: ";
	cin >> sm_2;
	cout << " Enter millimeters^2: ";
	cin >> mm_2;
	if (m_2 < 0 || dm_2 < 0 || sm_2 < 0 || mm_2 < 0)
		cout << " Negative numbers cannot be converted." << endl;
	else {
		dm_2 /= 100;
		sm_2 /= 10000;
		mm_2 /= 1000000;
		sum = dm_2 + sm_2 + mm_2 + m_2;
		cout << " Area in meters^2: " << sum << endl;
	}
}
void int_length() {

	float x;
	char y;
	cout << " Enter length: ";
	cin >> x;
	cout << " If it is in Meters, print M; if in Feet, print F: ";
	cin >> y;
	if (y == 'M') {
		cout << " Length, converted to Feet: " << x * 3.28084 << endl;
	}
	else if (y == 'F') {
		cout << " Length, converted to Meters: " << x / 3.28084 << endl;
	}
}
void american_length() {

	float m, y, f, i, sum;
	cout << " Program to convert length to feet " << endl;
	cout << " Enter miles: ";
	cin >> m;
	cout << " Enter yards: ";
	cin >> y;
	cout << " Enter feet: ";
	cin >> f;
	cout << " Enter inches: ";
	cin >> i;
	if (m < 0 || y < 0 || f < 0 || i < 0)
		cout << " Negative numbers cannot be converted." << endl;
	else {
		m *= 5280;
		y *= 3;
		i /= 12;
		sum = m + y + f + i;
		cout << " Length in feet: " << sum << endl;
	}
}
void mass() {

	float t, k, g, sum;
	cout << " Program to convert mass to kilograms " << endl;
	cout << " Enter tonnes: ";
	cin >> t;
	cout << " Enter kilograms: ";
	cin >> k;
	cout << " Enter grams: ";
	cin >> g;
	if (t < 0 || k < 0 || g < 0)
		cout << " Negative numbers cannot be converted." << endl;
	else {
		t *= 1000;
		g /= 1000;
		sum = t + k + g;
		cout << " Mass in kilograms: " << sum << endl;
	}
}
void convert() {

	cout << "\n 1) Time";
	cout << "\n 2) Length";
	cout << "\n 3) Temperature";
	cout << "\n 4) Area";
	cout << "\n 5) Volume";
	cout << "\n 6) International length";
	cout << "\n 7) American length";
	cout << "\n 8) Mass";
	cout << "\n 9) Back\n";
	cout << "\n Make a choice \32 ";
	int opr_1;
	cin >> opr_1;
	switch (opr_1) {
	case 1:
		time();
		break;
	case 2:
		length();
		break;
	case 3:
		temp();
		break;
	case 4:
		area();
		break;
	case 5:
		volume();
		break;
	case 6:
		int_length();
		break;
	case 7:
		american_length();
		break;
	case 8:
		mass();
		break;
	case 9:
		clear();
		main_1();
	}
}

void trig() {

	double n;
	double Sin, Cos, Tan, Ctg;
	char op;

	cout << "\n Enter the value of the angle(degrees): ";
	cin >> n;

	cout << "\n Select trigonometric function( sin - 's' / cos - 'c' / tan - 't' / ctg - 'C' ): ";
	cin >> op;

	Sin = sin(n * PI / 180);

	Cos = cos(n * PI / 180);

	Tan = tan(n * PI / 180);

	Ctg = 1 / Tan;

	switch (op)
	{
	case 's':
		cout << "\n sin(" << n << ") = " << Sin;
		cout << "\n\n ";
		break;

	case 'c':
		cout << "\n cos(" << n << ") = " << Cos;
		cout << "\n\n ";
		break;

	case 't':
		cout << "\n tan(" << n << ") = " << Tan;
		cout << "\n\n ";
		break;

	case 'C':
		cout << "\n ctg(" << n << ") = " << Ctg;
		cout << "\n\n ";
		break;

	default:
		cout << "\n Error!";
		break;


	}
}