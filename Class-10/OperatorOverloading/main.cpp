#include <iostream>
#include "complex.cpp"
using namespace std;

int main()
{
    complex c1(2,1);
    complex c2(3,4);

    c1.print();
    c2.print();

    complex sum = c1+c2;
    sum.print();

    complex sub = c1-c2;
    sub.print();

    complex mul = c1*c2;
    mul.print();

    bool isNotEqual = c1!=c2;
    if(isNotEqual) cout << "Not Equal!" << endl;
    else cout << "Equal!" << endl;

    return 0;
}
