#include <iostream>
using namespace std;

template <class T>
class node
{
public:
    T data;
    node *next;

    node(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};

template <class T>
class linkedList
{
private:
    node<T> *head;

public:
    linkedList();
    ~linkedList();
    void insertAtHead(T);
    void insertAtTail(T);
    void deleteAtHead();
    void deleteAtTail();
    void display();
};
