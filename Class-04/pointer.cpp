#include<iostream>
using namespace std;

int main()
{
    int a = 5;
    int *b = &a;
    int **c = &b;

    //output
    cout << a << endl; //5
    cout << &a << endl; //address of a
    cout << b << endl; //address of a
    cout << &b << endl; //address of b
    cout << *b << endl; //5
    cout << c << endl; //address of b
    cout << &c << endl; //address of c
    cout << **c << endl; //5
}
