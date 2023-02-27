#include "array.cpp"
#include <iostream>
using namespace std;

int main()
{

    //int arr[3];
    //className objectName;
    //className<type> objectName;

    //declaring object
    Array<string> courses(5);

    //adding values to array
    courses.add(0,"CSE115");
    courses.add(1,"CSE225");
    courses.add(2,"CSE215");

    //printing array values
    cout << "Courses Array:" << endl;
    for(int i=0;i<courses.getLength();i++){
        cout << courses.get(i) << endl;
    }

    //declaring an int array
    Array<int> numbers(5);

    numbers.add(0,10);
    numbers.add(1,20);
    numbers.add(2,30);
    numbers.add(3,40);
    numbers.add(4,50);

    cout << "\nNumbers Array:" << endl;
    for(int i=0;i<numbers.getLength();i++){
        cout << numbers.get(i) << endl;
    }

    return 0;
}
