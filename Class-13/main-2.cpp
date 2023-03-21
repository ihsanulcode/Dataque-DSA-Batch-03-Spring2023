#include "stacktype.cpp"
#include <iostream>
using namespace std;

int main()
{
    stacktype<char> s;
    string str;
    cin >> str;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '(')
            s.Push(str[i]);

        try
        {
            if (str[i] == ')')
                s.Pop();
        }
        catch (EmptyStack ex)
        {
            cout << "Unbalanced" << endl;
            return 0;
        }
    }

    if (s.IsEmpty())
        cout << "Balanced" << endl;
    else
        cout << "Unbalanced" << endl;

    return 0;
}