#include <iostream>
#include <vector>
using namespace std;

template <class T>
void print(vector<T> &v)
{
    cout << "vector: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " -> ";
    }
    cout << endl;
}
int main()
{
    // vector<int> v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // print(v);

    // vector<string> names;
    // names.push_back("Java");
    // names.push_back("DSA");
    // names.push_back("C++");
    // print(names);

    // vector<int> numbers(5, 1); // 1 1 1 1 1
    // print(numbers);

    vector<int> v1(3, 1);
    // print(v1);
    vector<int> v2(3, 2);
    // print(v2);

    cout << "Before swapping: " << endl;
    print(v1);
    print(v2);

    // swapping
    swap(v1, v2);

    cout << "After swapping: " << endl;
    print(v1);
    print(v2);

    return 0;
}