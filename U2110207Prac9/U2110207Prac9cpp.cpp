#include <iostream>
#include <string>
#include <fstream>


using namespace std;

class Person
{

public:
    string name;
    string age;
    Person() {}



    void getData(string name, string age)
    {
        this->name = name;
        this->age = age;
    }
    void getData()
    {
        cout << "Name : ";
        cin >> name;
        cout << "Age : ";
        cin >> age;
    }
    void showData()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }


};

void writeFile(Person& person)
{
    int n;
    cout << "How many people ? : ";
    cin >> n;
    ofstream data;
    data.open("Data2.dat", ios::binary);
    for (int i = 0; i < n; i++)
    {
        person.getData();
        data.write((char*)&person, sizeof(person));

    }
    data.close();
}

void readFile(Person& person)

{

    ifstream data;
    data.open("Data2.dat", ios::binary | ios::app);
    while (data.read((char*)&person, sizeof(person)))
    {
        person.showData();
        //data.close();
    }
    data.close();


}


void findPersonName(string age, Person& person)
{
    ifstream data("Data2.dat", ios::binary);

    while (data.read((char*)&person, sizeof(person)))
    {
        if (person.age == age)
        {
            cout << "Found\n";
            cout << person.name << endl;
        }
    }
    data.close();
}


void findPersonAge(Person& person)
{
    int number, index;
    float point;
    ifstream data("Data2.dat", ios::binary);

    data.seekg(0, ios_base::end);
    point = data.tellg();
    number = point / sizeof(person);
    cout << "Total people : " << number << endl;
    cout << "Select persons number : ";
    cin >> index;
    point = (index - 1) * sizeof(person);

    data.seekg(point);

    data.read((char*)&person, sizeof(person));
    cout << person.name << endl;
    data.close();

}


void writeFile(int i, Person& person)
{
    int n;
    cout << "How many people ? : ";
    cin >> n;
    ofstream data;
    data.open("Data2.dat", ios::binary | ios::app);
    data.seekp(i);
    for (int i = 0; i < n; i++)
    {
        person.getData();
        data.write((char*)&person, sizeof(person));

    }
    data.close();
}

void deleteRecord(string i, Person& person)
{
    ofstream data("temp.dat", ios::binary);
    ifstream data2("Data2.dat", ios::binary);
    while (data2.read((char*)&person, sizeof(person)))
    {
        if ((person.name != i) || (person.age != i))
        {
            data.write((char*)&person, sizeof(person));
        }
    }
    data.close();
    data2.close();
    remove("Data2.dat");
    rename("temp.dat", "Data2.dat");
}





int main()
{
    Person person;
    int i;
    string smth;
    cout << "\t\tTask 1\n";

    writeFile(person);
    readFile(person);
start:
    cout << "\t\tTask 2" << endl;

    int index;
    cout << "\t1) Determine age\n\t2) Determine name\n\t3) Delete\n\t4)Add record to position\n\t0) Exit\n";
    cout << "Index : ";
    cin >> index;
    switch (index)
    {
    case 0:
    {
        cin.clear();
        cin.ignore(32767, '\n');
        cin.get();
        return 0;
    }
    case 1:
    {
        findPersonAge(person);


        break;
    }
    case 2:
    {

        string age;
        cout << "Input name : ";
        cin >> age;
        findPersonName(age, person);

        break;
    }
    case 3:
    {
        cout << "Remove what : ";
        cin >> smth;
        deleteRecord(smth, person);
        break;
    }

    case 4:
    {

        cout << "Input position : ";
        cin >> i;
        writeFile(i, person);
        break;
    }
    default:
    {
        cout << "Wrong input" << endl;
        break;
    }
    }
    goto start;

    cout << "Press the enter ";
    cin.clear();
    cin.ignore(32767, '\n');
    cin.get();
    return 0;

}