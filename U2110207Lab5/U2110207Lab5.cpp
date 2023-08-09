/*
Name : Azizdek Mumijonov
ID: U2110207	
Project : Lab Assignment 5

*/

#include <iostream>

using namespace std;
//functions that I have used in this lab
float AreaOfCircle(float radius);
int SwapNumbers(int firstnumber, int secondnumber);
float Timer(float hour, float minute, float second);
float Series(float number);

// main function 
int main() {
	int firstnumber, secondnumber;
	float number, hours , minutes, seconds;

	// task 1
	cout << "Enter the radius : ";
	cin >> number;
	AreaOfCircle(number);
	cout << endl;

	// task 2
	cout << "Enter the numbers needed to be swapped : ";
	cin >> firstnumber >> secondnumber;
	SwapNumbers(firstnumber, secondnumber);
	cout << endl;


	//task 3
	cout << "Enter the hours : ";
	cin >> hours;
	cout << "Enter the minutes : ";
	cin >> minutes;
	cout << "Enter the seconds : ";
	cin >> seconds;
	Timer(hours, minutes, seconds);
	cout << endl;

	//task 4
	cout << "Enter the number : ";
	cin >> number;
	Series(number);

	// Asking 

	cout << "Do you want to check one more time, if so type 1, otherwise any symbol :";
	cin >> number;
	if (number == 1) {
		main();
	}

	system("pause");
	return 0;
}
float AreaOfCircle(float radius) {

	float pi = 3.1415;
	cout << "Area of circle is : " << radius * radius * pi << endl;
	return 1.0;
}
int SwapNumbers(int firstnumber, int secondnumber) {
	int z;
	z = firstnumber;
	firstnumber = secondnumber;
	secondnumber = z;
	cout << "The numbers before swap : " << secondnumber << " and " << firstnumber << endl;
	cout << "The numbers after swap : " << firstnumber << " and " << secondnumber << endl;
	return 0;
}

float Timer(float hour, float minute, float second) {	
	int hourstominute, secondstominute;
	hourstominute = hour * 60;
	secondstominute = second / 60;
	minute = minute + hourstominute + secondstominute;
	cout << "Total minutes : " << minute << endl;


	return 1.0;
}

float Series(float number) {
	float firstnumber, secondnumber, sum,sum2, upper;
	firstnumber = 1;
	
	sum = 0;
	
	for (int i = 1; i <= number; i++) {
		upper = 1;
		secondnumber = 1;
		sum2 = 1;
		for (int j = 0; j < i; j++) {
			upper = upper * firstnumber;
		}

		for (int k = 0; k < i; k++) {
			sum2 = sum2 * (secondnumber);
			++secondnumber;
		}
		++firstnumber;
		sum = sum + ((upper) / (sum2));
	}
	cout <<"The Sum is : "<< sum << endl;


	return 0;
}