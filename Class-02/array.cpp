#include<iostream>
using namespace std;

int main()
{
    //Array

    //declaring an double type array
    double cgpa[5] = {3.5,3.6,2.5,3.8,4};

    //print the array using loop
    for(int i=0;i<5;i++){
        cout << "cgpa[" << i << "]: " << cgpa[i] << endl;
        //cgpa[0]: 3.5
        //cgpa[1]: 3.6
        //....
    }
}
