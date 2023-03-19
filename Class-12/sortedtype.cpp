#include "sortedtype.h"

template <class T>
sortedtype<T>::sortedtype()
{
    this->length = 0;
    this->currentPos = -1;
}

template <class T>
void sortedtype<T>::makeEmpty()
{
    this->length = 0;
}

template <class T>
bool sortedtype<T>::isFull()
{
    return this->length == MAX_ITEMS;
}

template <class T>
int sortedtype<T>::lengthIs()
{
    return this->length;
}

template <class T>
void sortedtype<T>::resetList()
{
    this->currentPos = -1;
}

template <class T>
void sortedtype<T>::getNextItem(T &item)
{
    this->currentPos++;
    item = arr[this->currentPos];
}

template <class T>
void sortedtype<T>::insertItem(T item)
{
    int index = 0;
    while (index < this->length)
    {
        if (item > arr[index])
        {
            index++;
        }
        else if (item == arr[index])
        {
            index++;
        }
        else if (item < arr[index])
        {
            break;
        }
    }

    for (int i = this->length; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[index] = item;
    this->length++;
}

template <class T>
void sortedtype<T>::deleteItem(T item)
{
    int index = 0;
    while (item != arr[index])
    {
        index++;
    }

    for (int i = index + 1; i < this->length; i++)
    {
        arr[i - 1] = arr[i];
    }

    this->length--;
}

template <class T>
void sortedtype<T>::retriveItem(T &item, bool &found)
{
    found = false;

    // binary search
    int start = 0;
    int end = this->length - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == item)
        {
            found = true;
            item = arr[mid];
            break;
        }
        else if (arr[mid] > item)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
}