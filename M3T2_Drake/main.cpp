// CSC 134
// M3T2
// Drake
// 7 February 19

#include <iostream>

using namespace std;

void createPayChartWithFor()
{
    cout << "This is a pay chart using for()" << endl;

    int hours = 30;
    float totalPay;
    float payRate;; // pay per hour

    // ask the user for hourly pay
    cout << "What is your hourly pay? " << endl;
    cin >> payRate;
    // loop through and show pay for each

    cout << "Hours\t\tGross" << endl;
    cout << "______________________" << endl;

    for(int hours = 30; hours<=40; hours++) {
         // calc new pay
        totalPay = hours * payRate;
        // print line of table
        cout << hours << "\t\t" << totalPay << endl;
    }
}

void createPayChartWithWhile()
{
    cout << "This is a pay chart using while()" << endl;
    int hours = 30;
    float totalPay;
    float payRate;; // pay per hour

    // ask the user for hourly pay
    cout << "What is your hourly pay? " << endl;
    cin >> payRate;
    // loop through and show pay for each

    cout << "Hours\t\tGross" << endl;
    cout << "______________________" << endl;

    while (hours <= 40)
    {
        // calc new pay
        totalPay = hours * payRate;
        // print line of table
        cout << hours << "\t\t" << totalPay << endl;
        // increment
        hours++;
    }


}


int main()
{
    // print the user's hours worked and total gross pay
    // using a for loop
    createPayChartWithFor();


    // print the user's hours worked and total gross pay
    // using a for loop
    createPayChartWithWhile();


    return 0;
}


