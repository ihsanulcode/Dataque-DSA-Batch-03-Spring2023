#include<iostream>
using namespace std;

int main()
{
    // output - cout
    // input - cin

    string name;
    cout << "Enter name: ";
    //cin >> name;
    getline(cin,name);

    int id;
    cout << "Enter id: ";
    cin >> id;

    double cgpa;
    cout << "Enter cgpa: ";
    cin >> cgpa;

    //print
    cout << endl << "Name: " << name << endl << "ID: " << id << endl << "Cgpa: " << cgpa << endl;

    return 0;
}
