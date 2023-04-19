#include <iostream>
#include <math.h>
using namespace std;

int sumOfDigits(int n)
{
    if (n == 0)
        return 0;
    return (n % 10 + sumOfDigits(n / 10));
}

int fibonacci(int n)
{
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int factorial(int n)
{
    if (n >= 1)
        return n * factorial(n - 1);
    else
        return 1;
}

double sumOfSeries(int n)
{
    if (n == 0)
        return 1.0;
    if (n == 1)
        return 1 + (1.0 / 2.0);
    return (1.0 / pow(2.0, n) + sumOfSeries(n - 1));
}

int decToBin(int dec)
{
    if (dec == 0)
        return 0;
    else
        return (dec % 2 + 10 * (decToBin(dec / 2)));
}

int main()
{
    int n;
    cout << "Enter any number: ";
    cin >> n;
    // int sum = sumOfDigits(n);
    // cout << "Sum of digits: " << sum << endl;
    // int fibo = fibonacci(9);
    // cout << n << "th Fibonacci " << fibo << endl;
    // int fact = factorial(5);
    // cout << "Factorial of " << n << " is " << fact << endl;
    // double sum = sumOfSeries(n);
    // cout << "sum = " << sum << endl;
    int bin = decToBin(n);
    cout << "Binary: " << bin << endl;
}