#include "dynarr.cpp"
#include <iostream>
using namespace std;

int main()
{
    // sub-task-1
    dynArr obj1();
    dynArr obj2(5);

    // sub-task-2
    int temp;
    cout << "Enter 5 elements: " << endl;
    for(int i=0;i<5;i++){
        cin >> temp;
        obj2.setValue(i,temp);
    }

    // sub-task-3
    cout << "Array elements: " << endl;
    for(int i=0;i<5;i++){
        cout << obj2.getValue(i) << " ";
    }

    return 0;
}
