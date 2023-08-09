/*
Name : Azizbek Muminjonov
ID   : U2110207
Project : Lab Assignment 5
*/
#include <iostream>


using namespace std;


class Rectangle {
private:
	double length, breadth;
public:
	Rectangle()
	{
		length = 0;
		breadth = 0;
	};
	Rectangle(double lenght, double breadth) 
	{
		this->length = lenght;
		this->breadth = breadth;
	};
	double getArea() {
		return length * breadth;
	}

	void setLength(double length) {
		this->length = length;
	}

	void setBreadth(double breadth) {
		this->breadth = breadth;
	}

	friend Rectangle operator+(Rectangle& rectangle, Rectangle &rectangle2);
};

Rectangle operator+(Rectangle& rectangle, Rectangle& rectangle2)
{
	return Rectangle(rectangle.length + rectangle2.length, rectangle.breadth + rectangle2.breadth);
}





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Distance {
private:
	double kilometer, meter;
public:
	Distance() {
		kilometer = 0;
		meter = 0;
	}

	Distance(double kilometer, double meter) {
		this->kilometer = kilometer;
		this->meter = meter;
	}
	void showDistance()
	{
		cout << "Distance is " << kilometer * 1000 + meter << " metres" << endl;
	}
	friend Distance operator==(Distance& d, Distance& d2);
};

Distance operator==(Distance& d, Distance& d2)
{
	if ((d.kilometer * 1000 + d.meter) == (d2.kilometer * 1000 + d2.meter))
	{
		cout << "Equal" << endl;
	}
	else
	{
		cout << "Not equal"<<endl;
	}
	return d;
}

int main()
{
	// Task 1

	int length, breadth;
	cout << "Enter the values for sides\nLenght : ";
	cin >> length;
	cout << "Breadth : ";
	cin >> breadth;

	Rectangle rectangle1;
	rectangle1.setLength(length);
	rectangle1.setBreadth(breadth);
	cout << "Enter the values for sides\nLenght : ";
	cin >> length;
	cout << "Breadth : ";
	cin >> breadth;

	Rectangle rectangle2;
	rectangle2.setLength(length);
	rectangle2.setBreadth(breadth);
	cout << "Area of rectangle 1 : " << rectangle1.getArea() << endl;
	cout << "Area of rectangle 2 : " << rectangle2.getArea() << endl;
	
	Rectangle rectangle3 = rectangle1 + rectangle2;
	cout << "Area of rectangle 3 : " << rectangle3.getArea() << endl;


	// Task 2


	double km, m;
	cout << "Enter the km : ";
	cin >> km;
	cout << "Enter the m : ";
	cin >> m;

	Distance d(km, m);
	d.showDistance();

	cout << "Enter the km : ";
	cin >> km;
	cout << "Enter the m : ";
	cin >> m;

	Distance d2(km, m);
	d2.showDistance();
	d==d2;


	cin.clear();
	cin.ignore(32767, '\n');
	cin.get();
	return 0;
}