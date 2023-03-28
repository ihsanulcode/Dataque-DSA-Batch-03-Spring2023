#include <iostream>
using namespace std;

int main()
{
    // (a)
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if(i % 2 == 0)
            {
                cout << "+" ;
            }
            else
            {
                cout << "*" ;
            }
        }
        cout << endl;
    }

    cout << endl;
    
    // (b)
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
        {
            cout << " " ;
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "+" ;
        }
        
        cout << endl;
    }
    
    return 0;
}