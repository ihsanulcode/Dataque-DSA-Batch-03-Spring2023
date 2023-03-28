#include <iostream>
#include <cmath>
using namespace std;

// Method for checking if the number is prime or not
int isPrime(int x)
{
    int flag = 0;
    // Logic for checking the integer is prime or not
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            flag = 1;
            break;
        }
    }
    // Checking if the integer is 0 or 1
    if (x == 0 || x == 1)
    {
        return 0;
    }
    if (flag != 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Mehtod for printing the prime numbers in a range
void generatePrime(int a, int b)
{
    cout << "\nPrime numbers between " << a << " and " << b << " are: " << endl;
    for (int i = a; i < b; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int a, b;
    cout << "Enter the value of a & b: ";
    cin >> a >> b;

    generatePrime(a, b);

    return 0;
}