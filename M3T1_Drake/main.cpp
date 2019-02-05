// CSC 134
// M3T1
// Drake
// 2/5/19


#include <iostream>



using namespace std;

int main()
{
    int grade;  // individual test score
    int numTests;
    int average; // or float
    int total = 0; // accumulator

    // ask user for number of tests to average
    cout << "How many tests to average? ";
    cin >> numTests;

    for (int count=1; count <= numTests; count++)
    {
    //within loop, ask for a test grade
    cout << "Grade for test? ";
    cin >> grade;

    // add it to the total
    total = total + grade;

    }
    cout << "Total = " << total << endl;

    // find average by dividing total by number of tests
    average = total / numTests;

    cout << "The average is " << average << endl;

    return 0;
}
