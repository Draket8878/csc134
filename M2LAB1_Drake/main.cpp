// CSC 134
// M2LAB1
// Tommy Drake
// 22 January 2018

#include <iostream>

using namespace std;

int main()
{
    //string movieName;
    //movieName = "Interstellar";
    //double rating;
    //rating = 8.6;
    //int year;
   //year = 2014;
    //char firstLetter;
    //firstLetter = 'I';

    //name = "Interstellar"
    cout << "Enter a movie name: ";
    cin >> name;
    cout << "The movie you entered is named " << name;
    cout << "Enter the year of your movie: " << year;
    cin >> year;
    cin >> rating;

    cout << "It was released in " << year << endl;
    cout << "It has an IMDB rating of " << rating << endl;
    cout << "I would file this movie under" << firstLetter << endl;

    return 0;
}
