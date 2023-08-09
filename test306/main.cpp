#include <iostream>

using namespace std;

int const PI = 3.14;
int findArea(int radius);

int findLength(int raduis)
{
    int length;
    
    length = 2*raduis*PI;
    
    return length;
}



int main() {


    int radius;

    cout <<"Enter radius : "<<endl;
    cin >> radius;
    findArea("asdf");
    cout <<endl;
    cout << "Area : " << 10 *  findArea(radius) <<endl;
    cout << "Length : " << findLength(radius) <<endl;

    return 0;
}
int findArea(int radius)
{
    int area;
    area = radius* radius * PI;
    return area;
}
