/*
Task 3: Using the new operator, allocate a two dimensional integer array.
The number of rows and columns are going to be provided
by the user as input. However, in this task, all of the rows are not the
same size (the array is uneven).
The user will specify how many elements the individual rows will have.
Assign values to the array elements
by taking user inputs and then print the values.
Finally de-allocate the array using the delete operator.
*/

#include <iostream>
using namespace std;

int main()
{
    //getting row size from user
    int row,col;
    cout << "Enter row size: ";
    cin >> row;

    //declaring two dim array
    int **arr = new int*[row];

    int rowLength[row]; //for storing row lengths

    //initialize row lengths
    for(int i=0;i<row;i++){
        cout << "Enter row length for " << i << ": ";
        cin >> col;
        rowLength[i] = col;
        arr[i] = new int[col];
    }

    //getting array values from user
    cout << "\nEnter array values: " << endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<rowLength[i];j++){
            cin >> arr[i][j];
        }
    }

    //printing array
    cout << "\nArray: " << endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<rowLength[i];j++){
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
