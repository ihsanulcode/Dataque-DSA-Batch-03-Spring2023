#include "array.h"

template <class T>
Array<T>::Array(int size)
{
    this->arr = new T[size];
    this->length = 0;

}

template <class T>
void Array<T>::add(int index,T data)
{
    this->arr[index] = data; //arr[0] = 10;
    this->length++;
}

template <class T>
T Array<T>::get(int index)
{
    return this->arr[index]; //arr[0]
}

template <class T>
int Array<T>::getLength()
{
    return this->length;
}
