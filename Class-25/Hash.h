#include <bits/stdc++.h>
using namespace std;

class Hash
{
private:
    int BUCKET;
    list<int> *table;

public:
    Hash(int V);
    void insertItem(int x);
    void deleteItem(int key);
    bool searchItem(int key);
    int hashFunction(int x);
    void displayHash();
};