#include "stacktype.cpp"
#include <iostream>
using namespace std;

template <class T>
void PrintStack(stacktype<T> s)
{
    stacktype<T> temp;
    while (!s.IsEmpty())
    {
        temp.Push(s.Top());
        // cout << s.Top() << " ";
        s.Pop();
    }

    while (!temp.IsEmpty())
    {
        s.Push(temp.Top());
        cout << temp.Top() << " ";
        temp.Pop();
    }
    cout << endl;
}
int main()
{
    stacktype<int> stack;

    if (stack.IsEmpty())
        cout << "Stack is empty" << endl;
    else
        cout << "Stack is not empty" << endl;

    stack.Push(5);
    stack.Push(7);
    stack.Push(4);
    stack.Push(2);

    if (stack.IsEmpty())
        cout << "Stack is empty" << endl;
    else
        cout << "Stack is not empty" << endl;

    if (stack.IsFull())
        cout << "Stack is full" << endl;
    else
        cout << "Stack is not full" << endl;

    PrintStack(stack);
    stack.Push(3);
    PrintStack(stack);

    if (stack.IsFull())
        cout << "Stack is full" << endl;
    else
        cout << "Stack is not full" << endl;

    stack.Pop();
    stack.Pop();
    cout << stack.Top() << endl;
    return 0;
}