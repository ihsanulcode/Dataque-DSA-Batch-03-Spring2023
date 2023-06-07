#include <bits/stdc++.h>
#include "Hash.cpp"
using namespace std;

int main()
{
    Hash h(7);
    h.insertItem(15);
    h.insertItem(11);
    h.insertItem(27);
    h.insertItem(8);
    h.insertItem(12);

    h.displayHash();
    cout << endl;
    h.deleteItem(12);
    h.displayHash();

    string isfound = (h.searchItem(10)) ? "Found!" : "Not Found!";
    cout << isfound << endl;
}