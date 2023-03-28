#include "Complex.h"
#include <iostream>
#include <math.h>
using namespace std;

Complex::Complex()
{
    this->real = 0;
    this->imaginary = 0;
}

Complex::Complex(double real, double imaginary)
{
    this->real = real;
    this->imaginary = imaginary;
}

Complex Complex::operator+(Complex obj)
{
    Complex sum;
    sum.real = this->real + obj.real;
    sum.imaginary = this->imaginary + obj.imaginary;
    return sum;
}

Complex Complex::operator-(Complex obj)
{
    Complex sub;
    sub.real = real - obj.real;
    sub.imaginary = imaginary - obj.imaginary;
    return sub;
}

Complex Complex::operator*(Complex obj)
{
    Complex multiplication;
    multiplication.real = (this->real * obj.real) - (this->imaginary * obj.imaginary);
    multiplication.imaginary = (this->real * obj.imaginary) - (this->imaginary * obj.real);
    return multiplication;
}

Complex Complex::operator/(Complex obj)
{
    Complex Div;
    Div.real = (real * obj.real + imaginary * obj.imaginary) / (obj.real * obj.real + obj.imaginary * obj.imaginary);
    Div.imaginary = (imaginary * obj.real + real * obj.imaginary) / (obj.real * obj.real + obj.imaginary * obj.imaginary);
    return Div;
}

double Complex::getModuludValue()
{
    double rel = real * real;
    double img = imaginary * imaginary;
    double sum = rel + img;
    double mod = sqrt(sum);
    return mod;
}
void Complex::printComplex()
{
    cout << this->real << "+" << this->imaginary << "i" << endl;
}