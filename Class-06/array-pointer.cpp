#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};

    //cout << "Allocated size by this array: " << sizeof(arr) << endl;
    //cout << "Size of int data: " << sizeof(int) << endl;
    //cout << "Array length is: " << sizeof(arr)/sizeof(int) << endl;

    for(int i=0;i<sizeof(arr)/sizeof(int);i++)
    {
        cout << "Address of index " << i << ": " << arr+i << endl;
        cout << "Value in index " << i << ": " << *(arr+i) << endl;
    }

}
