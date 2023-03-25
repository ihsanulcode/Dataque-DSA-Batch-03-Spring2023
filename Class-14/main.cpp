#include "quetype.cpp"
#include <iostream>
using namespace std;

void checkEmpty(bool b)
{
    if (b)
        cout << "Queue is Empty" << endl;
    else
        cout << "Queue is not Empty" << endl;
}
void checkFull(bool b)
{
    if (b)
        cout << "Queue is Full" << endl;
    else
        cout << "Queue is not Full" << endl;
}

template <class T>
void Print(QueType<T> Q)
{
    QueType<T> temp = Q;
    while (!temp.IsEmpty())
    {
        int data;
        temp.Dequeue(data);
        cout << data << " ";
    }
    cout << endl;
    // Q.MakeEmpty();
    Q = temp;
    // while (!temp.IsEmpty())
    // {
    //     int n;
    //     temp.Dequeue(n);
    //     Q.Enqueue(n);
    // }
}
int main()
{
    QueType<int> q(5);
    checkEmpty(q.IsEmpty());

    q.Enqueue(5);
    q.Enqueue(7);
    q.Enqueue(4);
    q.Enqueue(2);
    checkEmpty(q.IsEmpty());
    checkFull(q.IsFull());
    q.Enqueue(6);

    Print(q);
    Print(q);
    // checkFull(q.IsFull());

    // if (!q.IsFull())
    //     q.Enqueue(8);
    // else
    //     cout << "Queue Overflow" << endl;

    // int d;
    // q.Dequeue(d);
    // q.Dequeue(d);
    // checkFull(q.IsFull());

    // if (!q.IsEmpty()){
    //     q.Dequeue(d);
    //     cout << d << endl;
    // }else
    //     cout << "Queue Underflow" << endl;

    // Print(q);
}