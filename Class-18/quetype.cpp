#include "quetype.h"
#include <iostream>
using namespace std;

template <class T>
quetype<T>::quetype()
{
    front = NULL;
    rear = NULL;
}

template <class T>
quetype<T>::~quetype()
{
    MakeEmpty();
}

template <class T>
bool quetype<T>::IsFull()
{
    NodeType *newNode;
    try
    {
        newNode = new NodeType;
        delete newNode;
        return false;
    }
    catch (bad_alloc &ex)
    {
        return true;
    }
}

template <class T>
bool quetype<T>::IsEmpty()
{
    return (front == NULL);
}

template <class T>
void quetype<T>::Enqueue(T data)
{
    if (IsFull())
    {
        throw FullQueue();
    }
    else
    {
        NodeType *newNode = new NodeType;
        newNode->info = data;
        newNode->next = NULL;

        if (rear == NULL)
        {
            front = newNode;
        }
        else
        {
            rear->next = newNode;
        }

        rear = newNode;
        // cout << "Enqueued: " << data << endl;
    }
}

template <class T>
void quetype<T>::Dequeue(T &item)
{
    if (IsEmpty())
    {
        throw EmptyQueue();
    }
    // else if (front == rear)
    // {
    //     NodeType *temp = front;
    //     item = front->info;
    //     front = NULL;
    //     rear = NULL;
    //     delete temp;
    // }
    else
    {
        NodeType *temp = front;
        item = front->info;
        front = front->next;

        if (front == NULL)
            rear = NULL;

        delete temp;
    }
}

template <class T>
void quetype<T>::MakeEmpty()
{
    NodeType *temp;
    while (front != NULL)
    {
        temp = front;
        front = front->next;
        delete temp;
    }
    rear = NULL;
}