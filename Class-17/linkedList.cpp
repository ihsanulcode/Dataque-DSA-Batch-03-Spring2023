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
void linkedList<T>::insertAfterNode(T key, T data)
{
    if (head == NULL)
    {
        cout << "Node doesn't exist" << endl;
        return;
    }

    node<T> *cur = head;
    while (cur != NULL)
    {
        if (key == cur->data)
        {
            node<T> *newNode = new node<T>(data);
            newNode->next = cur->next;
            cur->next = newNode;
            break;
        }
        cur = cur->next;
    }
}

template <class T>
void linkedList<T>::deleteAtHead()
{
    node<T> *temp = head;
    head = head->next;
    delete temp;
}

template <class T>
void linkedList<T>::deleteNode(T data)
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

    if (data == head->data)
    {
        deleteAtHead();
        return;
    }

    node<T> *temp = head;
    while (temp->next->data != data)
    {
        temp = temp->next;
    }

    node<T> *toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
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
