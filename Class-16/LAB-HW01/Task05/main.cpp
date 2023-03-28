#include "Complex.cpp"
#include <iostream>
using namespace std;

int main()
{
    // b
    Complex c1(1, 2);
    c1.printComplex();
    cout << "Modulus value: " << c1.getModuludValue() << endl;
    Complex c2(3, 4);
    c2.printComplex();
    cout << "Modulus value: " << c2.getModuludValue() << endl;

    // c
    Complex sum = c1 + c2;
    sum.printComplex();
    cout << "Modulus value: " << sum.getModuludValue() << endl;
    Complex sub = c1 - c2;
    sub.printComplex();
    cout << "Modulus value: " << sub.getModuludValue() << endl;
    Complex mul = c1 * c2;
    mul.printComplex();
    cout << "Modulus value: " << mul.getModuludValue() << endl;
    Complex div = c1 / c2;
    div.printComplex();
    cout << "Modulus value: " << div.getModuludValue() << endl;

    return 0;
}