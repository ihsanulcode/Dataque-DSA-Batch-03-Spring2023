#include <iostream>
using namespace std;

#define PI 3.1416

int main()
{
    float radius, area, perimeter;
    cout << "Enter the radius: ";
    cin >> radius;

    area = radius * radius * PI;
    perimeter = 2 * radius * PI;

    float twoDecimalArea = (int)(area * 100 + 0.5);           // for rounding of upto 2 decimal points
    float twoDecimalPerimeter = (int)(perimeter * 100 + 0.5); // for rounding of upto 2 decimal points

    cout << "Area: " << (float)(twoDecimalArea) / 100 << endl;
    cout << "Perimeter: " << (float)(twoDecimalPerimeter) / 100 << endl;

    return 0;
}