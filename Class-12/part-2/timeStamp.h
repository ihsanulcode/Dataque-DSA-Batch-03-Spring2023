#include <iostream>
using namespace std;

class timeStamp
{
public:
    int s;
    int m;
    int h;
    timeStamp();
    timeStamp(int, int, int);
    bool operator==(timeStamp);
    bool operator!=(timeStamp);
    bool operator>(timeStamp);
    bool operator<(timeStamp);
    friend ostream &operator<<(ostream &, timeStamp &); // Just like toString method in Java
};
