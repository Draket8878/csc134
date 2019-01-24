// CSC 134
// M2T1
// T Drake
// 1/17/19

#include <iostream>

using namespace std;

int main()
{
    // Listings 3-1 to 3-9

    cout << "Listing 3-1" << endl;
    // First code on list
    int mynumber;
    mynumber = 10;
    cout << mynumber << endl;

    cout << "Listing 3-2" << endl;
    // Code from 3-2
    //int mynumber;
    mynumber = 10;
    cout << mynumber << endl;
    mynumber = 20;
    cout << mynumber << endl;

    cout << "Listing 3-3" << endl;
    // Code from 3-3
    int start = 50;
    int finish;
    finish = start;
    cout << finish << endl;

    cout << "Listing 3-4" << endl;
    // Code from 3-4
    int final;
    int time;
    final = 28;
    time = 18;
    cout << final - time << endl;

    cout << "Listing 3-5" << endl;
    // Code from 3-5
    int first, second;
    cout << "Dividing 28 by 14." << endl;
    first = 28;
    second = 14;
    cout << "Quotient " << first / second << endl;
    cout << "Remainder " << first % second << endl;
    cout << "Dividing 32 by 6." << endl;
    first = 32;
    second = 6;
    cout << "Quotient " << first / second << endl;
    cout << "Remainder " << first % second << endl;

    cout << "Listing 3-6" << endl;
    // Code from 3-6
    string mystring;
    mystring = "abcdef";
    cout << mystring[2] << endl;

    cout << "Listing 3-7" << endl;
    // Code from 3-7
    string myString;
    myString = "Hello there";
    cout << myString << endl;

    cout << "Listing 3-8" << endl;
    // Code from 3-8
    int First = 10;
    int Second = 20;
    string result;
    result = First == Second ? "equal" : "not equal";
    cout << result << endl;

    cout << "Listing 3-9" << endl;
    // Last code on list
    string name;
    cout << "Type your name: ";
    cin >> name;
    cout << "Your name is " << name << endl;


    // only one return
    return 0;
}
