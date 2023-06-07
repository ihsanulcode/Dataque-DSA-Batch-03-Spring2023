#include <bits/stdc++.h>
#include "Hash.h"
using namespace std;

Hash::Hash(int V)
{
    this->BUCKET = V;
    table = new list<int>[BUCKET];
}

int Hash::hashFunction(int x)
{
    return (x % BUCKET);
}

void Hash::insertItem(int key)
{
    int index = this->hashFunction(key);
    table[index].push_back(key);
}

bool Hash::searchItem(int key)
{
    int index = this->hashFunction(key);

    list<int>::iterator i;
    for (i = table[index].begin(); i != table[index].end(); i++)
    {
        if (*i == key)
        {
            return true;
        }
    }
    return false;
}

void Hash::deleteItem(int key)
{

    if (!this->searchItem(key))
    {
        cout << "Not Found!" << endl;
        return;
    }

    int index = this->hashFunction(key);
    list<int>::iterator i;
    for (i = table[index].begin(); i != table[index].end(); i++)
    {
        if (*i == key)
        {
            break;
        }
    }

    if (i != table[index].end())
    {
        table[index].erase(i);
    }
}

void Hash::displayHash()
{
    for (int i = 0; i < BUCKET; i++)
    {
        cout << i;
        for (auto x : table[i])
            cout << " --> " << x;

        cout << endl;
    }
}