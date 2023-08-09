#include <iostream>
#include <string>
#include <math.h>
#include <fstream>

using namespace std;


class Shape
{
protected:
	double base;
	double width;

public:
	Shape() {};
	void setBase(double base)
	{
		this->base = base;
	}
	void getBase()
	{
		cout << "Base : " << base << endl;
	}
	void setWidth(double width)
	{
		this->width = width;
	}
	void getWidth()
	{
		cout << "Width : " << width << endl;
	}
	virtual double DisplayArea() { return 0; }
};


class Triangle : public Shape
{
private:
	double angle;
	const double PI = acos(-1);

public:
	Triangle() {};
	void setAngle(double angle)
	{
		this->angle = angle;
	}
	void getAngle()
	{
		cout << "Angle : " << angle << endl;
	}
	double DisplayArea()
	{
		cout << "Area : " << 0.5 *base * width * sin((angle*PI)/180) << endl;
		return (0.5 * base * width * sin((angle * PI)/180));
	}
};

class Rectangle : public Shape
{
public:
	Rectangle() {};
	double DisplayArea()
	{
		cout << "Area : " << base * width << endl;
		return (base * width);
	}
};

class Circle : public Shape
{
private :
	const double pi = 3.14;

public:
	Circle() {};
	double DisplayArea()
	{
		cout << "Area : " << base * base * pi << endl;
		return (base * base * pi);
	}
};



int main()
{
	int index, number;
	double base, width, radius, angle;


	Triangle triangle;
	Rectangle rectangle;
	Circle circle;
Start:
	cout << "\x1B[2J\x1B[H";
	cout << "\t1) Triangle\n\t2) Rectangle\n\t3) Circle\n\t4) Close the app\n";
	cout << "Index : ";
	cin >> index;
	switch (index)
	{
	case 1:
	{
		cout << "\t1) Set details\n\t2) Get details\n\t3) Back\n";
		cout << "Index : ";
		cin >> number;
		switch (number)
		{
		case 1:
		{
			cout << "Set base : ";
			cin >> base;
			triangle.setBase(base);
			cout << "Set width : ";
			cin >> width;
			triangle.setWidth(width);
			cout << "Set an angle : ";
			cin >> angle;
			triangle.setAngle(angle);
			goto Start;
			break;
		}
		case 2:
		{
			triangle.getBase();
			triangle.getWidth();
			triangle.getAngle();
			triangle.DisplayArea();
			cin.clear();
			cin.ignore(32767, '\n');
			cin.get();
			goto Start;
			break;
		}
		case 3:
		{
			goto Start;
			break;
		}
		default:
		{
			cout << "There is no such an option T_T" << endl;

			cin.clear();
			cin.ignore(32767, '\n');
			cin.get();
			break;
		}
		goto Start;
		break;
		}
	}
	case 2:
	{

		cout << "\t1) Set details\n\t2) Get details\n\t3) Back\n";
		cout << "Index : ";
		cin >> number;
		switch (number)
		{
		case 1:
		{
			cout << "Set base : ";
			cin >> base;
			rectangle.setBase(base);
			cout << "Set width : ";
			cin >> width;
			rectangle.setWidth(width);
			goto Start;
			break;
		}
		case 2:
		{
			rectangle.getBase();
			rectangle.getWidth();
			rectangle.DisplayArea();
			cin.clear();
			cin.ignore(32767, '\n');
			cin.get();
			goto Start;
			break;
		}
		case 3:
		{
			goto Start;
			break;
		}
		default:
		{
			cout << "There is no such an option T_T" << endl;

			cin.clear();
			cin.ignore(32767, '\n');
			cin.get();
			break;
		}
		goto Start;
		break;
		}

		break;
	}
	case 3:
	{

		cout << "\t1) Set details\n\t2) Get details\n\t3) Back\n";
		cout << "Index : ";
		cin >> number;
		switch (number)
		{
		case 1:
		{
			cout << "Set radius : ";
			cin >> base;
			circle.setBase(base);
			goto Start;
			break;
		}
		case 2:
		{
			circle.getBase();
			circle.DisplayArea();
			cin.clear();
			cin.ignore(32767, '\n');
			cin.get();
			goto Start;
			break;
		}
		case 3:{
			goto Start;
			break;
		}
		default:
		{
			cout << "There is no such an option T_T" << endl;

			cin.clear();
			cin.ignore(32767, '\n');
			cin.get();
			break;
		}
		}
	}
	case 4:
		break;
	default:
	{
		cout << "There is no such an option T_T" << endl;

		cin.clear();
		cin.ignore(32767, '\n');
		cin.get();
		goto Start;
		return 0;
		break;
	}
	}

	ofstream trian("triangle.txt");
	trian << triangle.DisplayArea() << endl;
	ofstream rect("rerctangle.txt");
	rect << rectangle.DisplayArea() << endl;
	ofstream circ("circle.txt");
	circ << circle.DisplayArea() << endl;

	cin.clear();
	cin.ignore(32767, '\n');
	cin.get();
	return 0;

}