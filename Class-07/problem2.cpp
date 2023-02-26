/*
Task 2: Using the new operator, allocate a two dimensional character array.
Again the number of rows and columns are going to be provided by the user as input.
All of the rows are the same size. Take character strings as input from the user and
then print the strings. Finally de-allocate the array using the delete operator.
*/

#include<iostream>
using namespace std;

int main()
{
    int row,col;
    cout << "Enter row and col: ";
    cin >> row >> col;

    //allocate a two dimensional character array
    string **arr = new string *[row];

    for(int i=0;i<row;i++)
        arr[i] = new string[col];

    //data input from the user
    cout << "\nEnter array data: " << endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin >> arr[i][j];
        }
    }

    //print the array
    cout << "\nArray: " << endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //deallocation
     for(int i=0;i<row;i++)
        delete[] arr[i];

     delete[] arr;

     return 0;
}
