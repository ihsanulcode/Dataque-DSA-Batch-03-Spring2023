#include "complex.h"
#include <iostream>
using namespace std;

complex::complex()
{
    this->real = 0;
    this->imaginary = 0;
}

complex::complex(double real, double imaginary)
{
    this->real = real;
    this->imaginary = imaginary;
}

complex complex::operator+(complex obj)
{
    complex sum;
    sum.real = this->real + obj.real;
    sum.imaginary = this->imaginary + obj.imaginary;
    return sum;
}

complex complex::operator-(complex obj)
{
    complex sub;
    sub.real = this->real - obj.real;
    sub.imaginary = this->imaginary - obj.imaginary;
    return sub;
}

complex complex::operator*(complex obj)
{
    complex mul;
    mul.real = (this->real*obj.real) - (this->imaginary*obj.imaginary);
    mul.imaginary = (this->real*obj.imaginary) + (this->imaginary*obj.real);
    return mul;
}

bool complex::operator!=(complex obj)
{
    bool result = false;
    if(this->real == obj.real && this->imaginary == obj.imaginary){
        result = false;
    }else{
        result = true;
    }

    return result;
}

void complex::print()
{
    if(this->imaginary<0)
        cout << this->real << this->imaginary << "i" << endl;
    else
        cout << this->real << "+" << this->imaginary << "i" << endl;
}
