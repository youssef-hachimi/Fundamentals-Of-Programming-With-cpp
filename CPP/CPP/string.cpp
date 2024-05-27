#include <iostream>
#include <string>
using namespace std;
int main(){
string firstName = "John ";
string lastName = "Doe";
string fullName = firstName + lastName;
cout << fullName;

string x = "10";
string y = "20";
string z = x + y; 

string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << "The length of the txt string is: " << txt.size();

string myString = "Hello";
cout << myString[1];
// Outputs e

string myString = "Hello";
myString[0] = 'J';
cout << myString;
// Outputs Jello instead of Hello

// string txt2 = "We are the so-called "Vikings" from the north.";
string txt2 = "We are the so-called \"Vikings\" from the north.";

string firstName;
cout << "Type your first name: ";
cin >> firstName; // get user input from the keyboard
cout << "Your name is: " << firstName;

// Type your first name: John
// Your name is: John

// That's why, when working with strings, we often use the getline() function to read a line of text. It takes cin as the first parameter, and the string variable as second:
string fullName;
cout << "Type your full name: ";
getline (cin, fullName);
cout << "Your name is: " << fullName;

// Type your full name: John Doe
// Your name is: John Doe


}