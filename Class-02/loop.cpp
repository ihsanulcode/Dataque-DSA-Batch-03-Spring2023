#include<iostream>
using namespace std;

int main()
{
    //loop
    //1. for loop
    //2. while loop
    //3. do-while loop

    //for loop
    for(int i=1; i<=5;i++){
        cout << i << " ";
    }

    cout << endl;

    //while loop
    int j = 1;
    while(j<=5){
        cout << j << " ";
        j++;
    }

    cout << endl;

    //do-while
    int k = 1;
    do{
        cout << k << " ";
        k++;
    }while(k<=5);

}
