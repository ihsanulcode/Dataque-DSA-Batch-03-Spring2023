#include "unsortedType.h"

template <class T>
unsortedType<T>::unsortedType()
{
    this->length = 0;
    this->currentPos = -1;
}

template <class T>
void unsortedType<T>::makeEmpty()
{
    this->length = 0;
}

template <class T>
bool unsortedType<T>::isFull()
{
    return this->length == MAX_ITEMS;
}

template <class T>
int unsortedType<T>::lengthIs()
{
    return this->length;
}

template <class T>
void unsortedType<T>::resetList()
{
    this->currentPos = -1;
}

template <class T>
void unsortedType<T>::insertItem(T item)
{
    arr[this->length] = item;
    this->length++;
}

template <class T>
void unsortedType<T>::deleteItem(T item)
{
    int index = 0;
    while (item != arr[index])
    {
        index++;
    }

    arr[index] = arr[length - 1];
    length--;
}

template <class T>
void unsortedType<T>::getNextItem(T &item)
{
    this->currentPos++; 
    item = arr[currentPos];
}

template <class T>
void unsortedType<T>::retriveItem(T &item, bool &found)
{
    int index = 0;
    found = false;
    for (int i = 0; i < length; i++)
    {
        if(item == arr[index]){
            found = true;
            item = arr[index];
        }else{
            index++;
        }
    }
    
}