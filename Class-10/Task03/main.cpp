#include <iostream>
#include "dynarr.cpp"
using namespace std;

int main()
{
    int row,col;
    cout << "Enter row and col: " << endl;
    cin >> row >> col;

    dynArr arr(row,col);

    int data;
    cout << "Enter elements: " << endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin >> data;
            arr.setValue(i,j,data);
        }
    }

    cout << "\nArray elements: " << endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           cout << arr.getValue(i,j) << " ";
        }
        cout << endl;
    }

    //arr.~dynArr();

    return 0;
}
