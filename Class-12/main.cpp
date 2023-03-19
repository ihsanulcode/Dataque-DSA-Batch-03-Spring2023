#include <iostream>
#include "sortedtype.cpp"
using namespace std;

template <class T>
void Print(sortedtype<T> u)
{
    int length = u.lengthIs();
    T value;
    for (int i = 0; i < length; i++)
    {
        u.getNextItem(value);
        cout << value << " ";
    }
    cout << endl;
}

template <class T>
void Retrieve(sortedtype<T> u, T value)
{
    bool b;
    u.retriveItem(value, b);
    if (b)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;
}

void checkFull(bool b)
{
    if (b)
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;
}

int main()
{
    sortedtype<int> list;

    cout << list.lengthIs() << endl;

    list.insertItem(5);
    list.insertItem(7);
    list.insertItem(4);
    list.insertItem(2);
    list.insertItem(1);

    Print(list);
    Retrieve(list, 6);
    Retrieve(list, 5);

    checkFull(list.isFull());

    list.deleteItem(1);
    Print(list);
    checkFull(list.isFull());

    return 0;
}