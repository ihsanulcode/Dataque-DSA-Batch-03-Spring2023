#include <iostream>
using namespace std;

int main()
{
    float hour, grade, cgpa, total = 0, totalHours = 0;
    
    for (int i = 1; i <= 3; i++)
    {
        cout << "Course " << i << " credit hour: " ;
        cin >> hour;
        cout << "Grade points for course " << i << " : " ;
        cin >> grade;

        totalHours += hour;
        total += (hour * grade);

    }

    cgpa = total / totalHours;

    cout << "\nTotal credit hour is: " << totalHours << endl;
    cout << "Total grade point is: " << total << endl;
    cout << "CGPA for the semester is: " << cgpa << endl;
    
    return 0;
}