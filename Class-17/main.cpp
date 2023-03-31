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
    // list.deleteAtHead();
    // list.display();
    // list.deleteAtTail();
    // list.display();
    list.insertAfterNode("Tasnuba", "Nadia");
    list.display();
    // list.insertAfterNode("Sadi", "Siam");
    // list.display();
    // list.insertAfterNode("head", "Ramisa");
    // list.display();
    list.deleteNode("Sadi");
    list.display();
    list.deleteNode("Ihsanul");
    list.display();
    list.deleteNode("Tasnuba");
    list.display();
    list.deleteNode("Maisha");
    list.display();

    return 0;
}