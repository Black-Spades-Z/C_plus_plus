#pragma once
#include <iostream>
#include <math.h>
using namespace std;

class Traingle {

private:
    double h;//height
    double b;//base
public:
    Traingle(){};
    Traingle(double h, double b) {
        this->h = h;
        this->b = b;
    }

    ~Traingle() {

    };
    void getHeight() {
        cout << "Height:" << h << endl;
    }

    void setHeight(double h) {
        this->h = h;
    }

    void getBase() {
        cout << "Base:" << b << endl;
    }
    void setBase(double b) {
        this->b = b;
    }
    void getArea() {
        double area = (h * b) / 2;
        cout << "The Area of the Triangle: " << area << endl;
    }
    void getPerimeter() {
        double perimeter = (b + sqrt(b * b + 4 * h * h));
        cout << "The Perimeter of the Triangle is : " << perimeter << endl;
    }

};