#include <iostream>
#include <fstream>
#include <string>
#include <use_ansi.h>

using namespace std;

class User
{
private:
    string defaultSits[5][10];
    string vipSits[3][8];
    string vipPlusSits[3][4];
    char index;
    string test;

public:
    User() {};

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

    int showList() {

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

    int chooseSit() {
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
            showList();
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

        return 0;
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
};


int main()
{
    User user;

    // user.resetDefaultSitList();


    user.showList();
    user.chooseSit();
    // user.chooseSit();
    // user.showList();
    cout << "End of the test";
    return 0;
}