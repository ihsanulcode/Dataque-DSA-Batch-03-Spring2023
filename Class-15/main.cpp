#include "linkedList.cpp"
#include <iostream>
using namespace std;

int main()
{
    linkedList<string> list;
    list.insertAtTail("Maisha");
    list.insertAtTail("Tasnuba");
    list.insertAtTail("Sadi");
    list.insertAtHead("Ihsanul");
    list.display();
    list.deleteAtHead();
    list.display();
    list.deleteAtTail();
    list.display();

    return 0;
}