#include <iostream>
#include "quetype.cpp"
using namespace std;

int main()
{
    quetype<int> q;
    if (q.IsEmpty())
        cout << "Empty" << endl;
    else
        cout << "Not Empty" << endl;

    q.Enqueue(1);
    q.Enqueue(2);
    q.Enqueue(3);

    int temp;
    q.Dequeue(temp);
    cout << "Dequeued: " << temp << endl;
    q.Dequeue(temp);
    cout << "Dequeued: " << temp << endl;
    q.Dequeue(temp);
    cout << "Dequeued: " << temp << endl;

    if (q.IsEmpty())
        cout << "Empty" << endl;
    else
        cout << "Not Empty" << endl;
}