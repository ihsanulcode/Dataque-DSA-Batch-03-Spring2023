#include "stacktype.h"

template <class T>
stacktype<T>::stacktype()
{
    this->top = -1;
}
template <class T>
bool stacktype<T>::IsEmpty()
{
    return this->top == -1;
}
template <class T>
bool stacktype<T>::IsFull()
{
    return this->top == MAX_SIZE - 1;
}
template <class T>
void stacktype<T>::Push(T data)
{
    if (IsFull())
        throw FullStack();
    this->top++;
    items[top] = data;
}
template <class T>
void stacktype<T>::Pop()
{
    if (IsEmpty())
        throw EmptyStack();
    this->top--;
}
template <class T>
T stacktype<T>::Top()
{
    if (IsEmpty())
        throw EmptyStack();
    return items[top];
}
