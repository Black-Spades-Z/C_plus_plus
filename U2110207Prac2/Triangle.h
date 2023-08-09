#ifndef Triangle
#define Traingle
#include <iostream>

class Triangle
{
private:
	double Height, Base, thirdSide; 
public:
	Triangle()
	{
		Height = 0;
		Base = 0;
	}
	Triangle(double h, double b)
	{
		Height = h;
		Base = b;
	}
	~Triangle()
	{
		std::cout << "Object is destroyed" << std::endl;
	};
	void setHeight(double h);
	void getHeight();
	void setBase(double b);
	void getBase();
	void getArea();
	void getPerimeter();
	void getPerimeter(double thirdSide);
	void getPerimeter(int angle);
};
#endif