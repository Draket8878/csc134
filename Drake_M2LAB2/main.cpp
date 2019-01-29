// CSC 134
// M2LAB2
// Tommy Drake
// 29 January 2019
#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    int average = 0;
    int grade;
    cout << "Enter your 3 grades: ";
    cin >> a >> b >> c;
    average = a + b + c;
    grade = average / 3;
    cout << "Your grade is: " << grade << endl;

    if (grade >= 90)
    {
        cout << "Your letter grade is " << 'A' << endl;
    }
    else if (grade >= 80)
    {
        cout << "Your letter grade is " << 'B' << endl;
    }
        else if (grade >= 70)
    {
        cout << "Your letter grade is " << 'C' << endl;
    }
    else if (grade >= 60)
    {
        cout << "Your letter grade is " << 'D' << endl;
    }
    else
    {
        cout << "Your letter grade is " << 'F' << endl;
    }


    return 0;
}
