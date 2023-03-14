#include "unsortedType.cpp"
#include <iostream>
using namespace std;

int main()
{
    unsortedType<int> list;
    list.insertItem(1);
    list.insertItem(2);
    list.insertItem(3);
    list.insertItem(4);

    for (int i = 0; i < list.lengthIs(); i++)
    {
        int item;
        list.getNextItem(item);
        cout << item << endl;
    }

    cout << endl;

    bool found;
    int key = 2;
    list.retriveItem(key, found);

    if (found)
        cout << "Found!" << endl;
    else
        cout << "Not Found!" << endl;

    if (list.isFull())
        cout << "Full!" << endl;
    else
        cout << "Not Full!" << endl;

    list.insertItem(5);
    if (list.isFull())
        cout << "Full!" << endl;
    else
        cout << "Not Full!" << endl;
}