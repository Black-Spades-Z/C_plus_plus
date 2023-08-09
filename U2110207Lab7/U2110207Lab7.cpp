/*
NAME: AZIZDEK MUMINJONOV
ID  : U2110207
PROJECT : Lab assignment 7
*/





#include <iostream>	

using namespace std;
int SizeArray(int index) {
	const int sizeOfArray = index;
	return sizeOfArray;
}
void clear() {
	cout << "\x1B[2J\x1B[H";
}
int main() {
	clear();
// task 1 
	cout << "Task 1" << endl << endl << endl;

	int array[6] = { 1, 12, 123, 3242, 11, 90 };
	for (int i = 0; i < 6; i++) {

		cout << array[i] << endl;
	}
	cout << endl;
	cin.clear();
	cin.ignore(32767, '\n');
	cin.get();

	
// task 2
	clear();
	cout << "Task 2" << endl << endl << endl;
	int sum = 0;
	for (int i = 0; i < 6; i++) {
		sum = sum + array[i];
	}
	cout << sum << endl << endl;
	cin.clear();
	cin.ignore(32767, '\n');
	cin.get();

//task 3
	clear();
	cout << "Task 3" << endl << endl << endl;
	int var;

	int a1[10] = { 25, 27, 32, 98 };
	int a2[10] = { 12, 23, 28, 51, 72, 85, 97 };
	int a3[20];

	for (int i = 0; i < 20; i++) {
		if (i < 10) {
			a3[i] = a1[i];
		}
		else {
			a3[i] = a2[i - 10];
		}
	}
	
	for (int i = 1; i < 20; i++) {
		while (true) {
			if (a3[i] >= a3[i - 1]) {
				break;
			}
			else if (a3[i] <= a3[i - 1]) {
				var = a3[i];
				a3[i] = a3[i - 1];
				a3[i - 1] = var;
				--i;
			}
		}
	}
	for (int i = 0; i < 20; i++) {
		cout << a3[i] << endl;
	}

//task 4
	clear();
	cout << "Task 4" << endl << endl;
	int array1[10], value;
	cout << "Size of array 10\nInput allvalues:\n";
	for (int i = 0; i < 10; i++) {
		cout << "array1[" << i << "] : ";
		cin >> value;
		array1[i] = value;
		cout << endl;
	}
	for (int i = 0; i < 10; i++) {
		cout << array1[i] << endl;
	}

//task 5
	clear();
	cout << "Task 5\n\n";
	cout << "Our array is: array1" << endl;
	cout << "Which element you want to delete ?" << endl;
	for (int i = 0; i < 10; i++) {
		cout << array1[i] << " ";
	}
	cout << "\nEnter the element:";
	cin >> value;
	for (int i = 0; i < 10; i++) {
		if (array1[i] == value) {
			var = i;
			break;
		}
	}
	for (var; var < 10; var++) {
		array1[var] = array1[var + 1];
		if (var == 8) {
			break;
		}
	}
	array1[9] = 0;
	cout << "We have deleted this element, now array1 looks like : " << endl;
	for (int i = 0; i < 10; i++) {
		cout << "array1[" << i << "] : " << array1[i] << endl;
	}

	cin.clear();
	cin.ignore(32767, '\n');
	cin.get();
	return 0;
}