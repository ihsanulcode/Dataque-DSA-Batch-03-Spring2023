/*
Todays class was a pointer theory class. We did not code anything in this class but I provided this
program for better understanding of todays class output.
*/

#include<iostream>
using namespace std;

int main()
{
    int x = 10;
    int *p = &x;

    cout << "x = " << x << endl;
    cout << "&x = " << &x << endl;
    cout << "p = " << p << endl;
    cout << "&p = " << &p << endl;
    cout << "*p = " << *p << endl;

    return 0;
}
