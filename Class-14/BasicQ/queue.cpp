#include "queue.h"
#include <iostream>
using namespace std;

template <class T>
Queue<T>::Queue()
{
    this->rear = -1;
}

template <class T>
bool Queue<T>::isEmpty()
{
    return this->rear == -1;
}

template <class T>
void Queue<T>::enqueue(T data)
{
    if (rear ==  max_items - 1)
    {
        cout << "Full Queue" << endl;
        return;
    }

    rear++;
    arr[rear] = data;
}

template <class T>
T Queue<T>::dequeue()
{
    if (isEmpty())
    {
        cout << "Empty Queue" << endl;
        return -1;
    }

    int front = arr[0];
    for (int i = 0; i < rear; i++)
    {
        arr[i] = arr[i + 1];
    }

    rear--;
    return front;
}

template <class T>
T Queue<T>::front()
{
    if (isEmpty())
    {
        cout << "Empty Queue" << endl;
        return -1;
    }
    return arr[0];
}