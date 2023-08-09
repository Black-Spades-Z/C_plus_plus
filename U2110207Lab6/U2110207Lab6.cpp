/*
Name : Azizdek Muminjanov
ID : U2110207
Project : Lab Assignment 6
*/

#include <iostream>
#include <math.h>
using namespace std;

// Functions 

float Area(float radius);																		// circle
float Area(float base, float weidth);															// rectangle
float Area(float base, float height, float weidth);												// triangle
int Area(int base);																				// square
int Sum(int fistnumber, int secondnumber);														// sum of numbers
int Fibo(int number);																			// Fibonacci numbers
int greatestCommonDivisor(int firstnumber, int secondnumber);									// Greatest common devisor
int largestAmong(int number, int number2, int number3);											// Largest among (int)
float largestAmong(float firstnumber, float secondnumber, float thirdnumber);					// Largest among (float)
template <typename T>
T largestAmong(T numbers, T numbers2, T numbers3);												// template 
int main() {
	int number, number2, number3;
	float firstnumber, secondnumber , thirdnumber;
	cout << "Welcome to out area calculator" << endl << endl;

	//task 1 (All variables are at the bigining)

	cout << "Task1" << endl << endl;
	cout << "		1. Circle "    << endl;
	cout << "		2. Rectangle " << endl;
	cout << "		3. Triangle "  << endl;
	cout << "		4. Square "	   << endl;
	cout << endl;
	cout << "Area of which figure you want to calculate : ";
	cin  >> number;
	switch (number) {
		case 1: {

			cout << endl;
			cout << "Please enter the value of the radius : ";
			cin >> firstnumber;
			Area(firstnumber);
			break; }
		case 2: {
	
			cout << endl;
			cout << "Please enter the values of the sides : ";
			cin >> firstnumber;
			cin >> secondnumber;
			Area(firstnumber, secondnumber);
			break;
		}
		case 3: {
		
			cout << endl;
			cout << "Please enter the values of the sides : ";
			cin >> firstnumber;
			cin >> secondnumber;
			cin >> thirdnumber;
			Area(firstnumber, secondnumber, thirdnumber);
			break;
		}
		case 4: {
	
			cout << endl;
			cout << "Please enter the value of the side : ";
			cin >> number;
			Area(number);
			break;
		}
		default: {
		
			cout << "You have entered not exicting number, try again :( " << endl;
			main();
			break;
		}
		break;
	}
	
	// task 2 (All variables at the begining)	
	cout << endl;
	cout << "Task2 :  Sum of numbers" << endl << endl;
	cout << "Enter the numbers to add : \n";
	cin >> number >> number2;
	cout << number << " + " << number2 << " = " << Sum(number, number2) << endl << endl;
	


	// task 3 (All variables are at the begining)

	cout << "Task 3 : Fibonacci number" << endl << endl;
	cout << "Enter the number : \n";
	cin >> number;
	cout << "Your result is :" << Fibo(number) << endl;


	//task 4 (All variables are at the begining )
	cout << endl;
	cout << "Task 4 : G. C. D " << endl << endl;
	cout << "Enter the numbers : \n";
	cin >> number >> number2;
	cout << "The result is : " << greatestCommonDivisor(number, number2) << endl<< endl;

	// task 5 ( All variables are at the begining)

	cout << "Task 5 : The largest among" << endl << endl;
	cout << "Are the numbers float (f) or integer (i) type ? : ";
	cout << "1. Int" << endl;
	cout << "2. Float" << endl;
	cin >> number3;
	if (number3 == 1) {
		cout << "Enter the numbers : \n";
		cin >> number >> number2>> number3;
		largestAmong(number, number2, number3);
	}
	else if (number3 == 2) {
		cout << "Enter the numbers : ";
		cin >> firstnumber >> secondnumber>> thirdnumber;
		largestAmong(firstnumber, secondnumber, thirdnumber);
	}
	else {
		cout << "You had to type only f or i sorry ";
	}
	cout << endl;
	
	//task 6 (All variables are at the begining)

	cout << "Task 6 : Template function " << endl;
	cout << "Please enter the numbers of one type : \n"<< endl;
	cin >> firstnumber >> secondnumber >> thirdnumber;
	largestAmong(firstnumber, secondnumber, thirdnumber);
system("pause");
return 0;
}

float Area(float radius) {

	const float pi = 3.14;
	float area = radius * radius * pi;
	cout << "The area of given circle is : " << area << endl;
	return 0;
}

float Area(float base, float weidth) {
	float area;
	area = base * weidth;
	cout << "Area of given rectangle is : " << area << endl;
	return 0;
}

float Area(float base, float height, float weidth) {
	float area;
	float perimetr;
	perimetr = base + height + weidth;
	perimetr = perimetr / 2;
	area = perimetr * (perimetr - base) * (perimetr - height) * (perimetr - weidth);
	area = sqrt(area);
	cout << "Area of the given triangle is : " << area << endl;
	return 0;
}

int Area(int base) {
	int area;
	area = base * base;
	cout << "The area of the given square is : " << area << endl;
	return 0;
}

int Sum(int firstnumber, int secondnumber) {
	return firstnumber + secondnumber;
}

int Fibo(int number) {
	if (number == 1 || number == 0)
		return number;
	else
		return (number - 1) + (number - 2);
}

int greatestCommonDivisor(int firstnumber, int secondnumber) {
	if (firstnumber == 0 || secondnumber == 0)
		return 0;
	else if (firstnumber == secondnumber)
		return firstnumber;
	else if (firstnumber > secondnumber)
		return greatestCommonDivisor(firstnumber - secondnumber, secondnumber);
	else 
		return greatestCommonDivisor(firstnumber, secondnumber - firstnumber);
	return 0;
}

int largestAmong(int number, int number2, int number3) {
	if (number == number2 == number3) {
		cout << "They are equal " << endl;
	}
	else if (number > number2 && number > number3 ) {
		cout << "The largest is : " << number << endl;;
	}
	else if (number2 > number && number2 > number3)
	{
		cout << "The largest is : " << number2 << endl;
	}
	else
	{
		cout << "The largest is : " << number3 << endl;
	}
	return 0;
}
float largestAmong(float firstnumber, float secondnumber, float thirdnumber) {
	if (firstnumber == secondnumber == thirdnumber) {
		cout << "They are equal " << endl;
	}
	else if (firstnumber > secondnumber && firstnumber > thirdnumber)
	{
		cout << "The largest is : " << firstnumber << endl;
	}
	else if (secondnumber > firstnumber && secondnumber > thirdnumber)
	{
		cout << "The largest is : " << secondnumber << endl;
	}
	else
	{
		cout << "The largest is : " << thirdnumber << endl;
	}
	return 0;
}
template <typename T>
T largestAmong(T numbers, T numbers2, T numbers3) {
	if (numbers == numbers2 == numbers3) {
		cout << "They are equal " << endl;
	}
	else if (numbers > numbers2 && numbers > numbers3) {
		cout << "The largest is : " << numbers << endl;;
	}
	else if (numbers2 > numbers && numbers2 > numbers3)
	{
		cout << "The largest is : " << numbers2 << endl;
	}
	else
	{
		cout << "The largest is : " << numbers3 << endl;
	}
}