#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

class complex
{
private:
    double real, imaginary;

public:
    complex();
    complex(double,double);
    complex operator+(complex);
    complex operator-(complex);
    complex operator*(complex);
    bool operator!=(complex);
    void print();
};

#endif // COMPLEX_H_INCLUDED
