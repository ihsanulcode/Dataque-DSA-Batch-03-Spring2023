#include "linkedList.h"
#include <iostream>
using namespace std;

template <class T>
linkedList<T>::linkedList()
{
    head = NULL;
}

template <class T>
linkedList<T>::~linkedList()
{
    head = NULL;
}

template <class T>
void linkedList<T>::insertAtHead(T data)
{
    node<T> *newNode = new node<T>(data);
    newNode->next = head;
    head = newNode;
}

template <class T>
void linkedList<T>::deleteAtHead()
{
    node<T> *temp = head;
    head = head->next;
    delete temp;
}

template <class T>
void linkedList<T>::insertAtTail(T data)
{
    node<T> *newNode = new node<T>(data);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    node<T> *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

template <class T>
void linkedList<T>::deleteAtTail()
{
    if (head == NULL)
    {
        return;
    }

    if (head->next == NULL)
    {
        deleteAtHead();
        return;
    }

    node<T> *secondLast = head;
    while (secondLast->next->next != NULL)
    {
        secondLast = secondLast->next;
    }

    delete secondLast->next;
    secondLast->next = NULL;
}

template <class T>
void linkedList<T>::display()
{
    if (head == NULL)
    {
        cout << "Empty LinkedList" << endl;
        return;
    }

    node<T> *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
