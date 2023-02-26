/*
Task 1: Using the new operator, allocate an integer array of user specified size
(the user gives the size of the array as input). Assign values to the array elements by
taking user inputs and then print the values. Finally de-allocate the array
using the delete operator.
*/

#include<iostream>
using namespace std;

int main()
{
    //getting array size from user
    int size;
    cout << "Enter size for the array: ";
    cin >> size;

    //allocate an integer array of user specified size
    int *arr = new int[size];

    //Assigning values to the array elements by taking user inputs
    cout << "Enter array values: " << endl;
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }

    //print the values
    cout << "\nArray values: " << endl;
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }

    //Finally de-allocate the array
    delete[] arr;

    return 0;
}
