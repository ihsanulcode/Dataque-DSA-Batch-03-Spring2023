class Complex
{
private:
    double real;
    double imaginary;

public:
    Complex();
    Complex(double, double);
    Complex operator+(Complex);
    Complex operator-(Complex);
    Complex operator*(Complex);
    Complex operator/(Complex);
    double getModuludValue();
    void printComplex();
};