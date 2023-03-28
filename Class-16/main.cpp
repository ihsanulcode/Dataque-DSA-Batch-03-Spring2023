#include <iostream>
#include "stacktype.cpp"
using namespace std;

int main()
{
    StackType<int> s;

    s.Push(1);
    s.Push(2);
    s.Push(3);

    cout << s.Top() << endl;
    s.Pop();
    cout << s.Top() << endl;
    s.Pop();
    cout << s.Top() << endl;
    s.Pop();
    // cout << s.Top() << endl;
    // s.Pop();

    return 0;
}
