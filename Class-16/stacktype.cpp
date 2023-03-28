#include <iostream>
#include "stacktype.h"
using namespace std;

template <class T>
StackType<T>::StackType()
{
    topPtr = NULL;
}

template <class T>
bool StackType<T>::IsEmpty()
{
    return (topPtr == NULL);
}

template <class T>
T StackType<T>::Top()
{
    if (IsEmpty())
        throw EmptyStack();
    else
        return topPtr->info;
}

template <class T>
bool StackType<T>::IsFull()
{
    NodeType *location;
    try
    {
        location = new NodeType;
        delete location;
        return false;
    }
    catch (bad_alloc &exception)
    {
        return true;
    }
}

template <class T>
void StackType<T>::Push(T newItem)
{
    if (IsFull())
        throw FullStack();
    else
    {
        NodeType *location = new NodeType;
        location->info = newItem;
        location->next = topPtr;
        topPtr = location;
    }
}

template <class T>
void StackType<T>::Pop()
{
    if (IsEmpty())
        throw EmptyStack();
    else
    {
        NodeType *tempPtr = topPtr;
        topPtr = topPtr->next;
        delete tempPtr;
    }
}

template <class T>
StackType<T>::~StackType()
{
    NodeType *tempPtr;
    while (topPtr != NULL)
    {
        tempPtr = topPtr;
        topPtr = topPtr->next;
        delete tempPtr;
    }
}
