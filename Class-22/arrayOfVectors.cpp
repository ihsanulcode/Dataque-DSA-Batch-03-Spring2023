#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr[3];

    arr[0].push_back(1);
    arr[0].push_back(3);
    arr[0].push_back(5);

    arr[1].push_back(0);
    arr[1].push_back(2);
    arr[1].push_back(4);

    arr[2].push_back(3);
    arr[2].push_back(2);
    arr[2].push_back(1);

    cout << "Array of vectors:" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "index " << i;
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << " -> " << arr[i][j];
        }
        cout << endl;
    }
    
}