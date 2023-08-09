/*
Name : Azizdek Muminjonov
ID: U2110207
Project : Practice Lab Assignment 5
*/


#include <iostream>
using namespace std;

int main() {
    int Number, Sum, i,j;
    float number, sum, number2;
    char Star;
    // task 1 (All variables are at the begining)
    
    Sum = 0;
    cout << "Please enter your number :";
    cin >> Number;
    while (Number >= 1) {
        Sum = Number % 10;
        cout << Sum;
        Number = Number / 10;
    }
    cout << endl;


    // task 2 (All variables are at the begining)
 
    Star = '*';
    for (i = 0; i <= 5; i++) {
        for (j = 0; j < i; j++) {

            cout << Star;
        }
        cout << endl;
    }
    cout << endl;

    //task 3 (All variables are at the begining)

    for (i = 0; i <= 5; i++) {
        for (j = 5; j > i; j--) {
            cout << " ";
        }
        for (j = 0; j < i; j++) {

            cout << Star;
        }
        cout << endl;

    }

    // task 4 (All variables at the begining)
  
    for (i = 0; i <= 5; i++) {
        if (i == 2)
            continue;
        else if (i == 4)
            continue;
        for (j = 5; j > i; j = j -2) {
            cout << " ";

        }
        for (j = 0; j < i; j++) {
            cout << Star;
        }
        cout << endl;
    }
    cout << endl;



    // task 5 (All variables are at the begining)
   
    Star = '*';
    for (i = 0; i <= 5; i++) {
        for (j = 0; j < i; j++) {

            cout << Star;
        }
        cout << endl;
    }
    for ( i = 0; i <= 5; i++) {
        for (j = 5; j > i; j--) {
            cout << Star;
        }
        cout << endl;
    }


    //task 6 (All variables are at the begining)

    sum = 0;
    number = 1;
    number2 = 1;
    for (i = 1; i <= 7; i++){
        sum = sum + (number / number2);
        number++;
        number2 = number2 * (number2 + 1);
    }
    cout << "The Sum is " << sum << endl;




    system("pause");
    return 0;
}