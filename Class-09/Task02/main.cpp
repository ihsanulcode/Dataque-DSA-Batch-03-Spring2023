#include <iostream>
#include "dynarr.cpp"
using namespace std;

int main()
{
    dynArr arr(5);
    arr.allocate(3);

    int input;
    cout << "Enter 3 values: " << endl;
    for(int i =0;i<3;i++)
    {
        cin >> input;
        arr.setValue(i,input);
    }

    cout << "Array: ";
    for(int i =0;i<3;i++)
    {
        cout << arr.getValue(i) << " ";
    }

    return 0;
}
