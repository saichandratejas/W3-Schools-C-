- we often use the getline() function to read a line of text. It takes cin as the first parameter, and the string variable as second.
  
> Eg : 1
  
string firstName;
cout << "Type your first name: ";
cin >> firstName; // get user input from the keyboard
cout << "Your name is: " << firstName;

// Type your first name: John
// Your name is: John

> Eg : 2
  
string firstName;
cout << "Type your first name: ";
cin >> firstName; // get user input from the keyboard
cout << "Your name is: " << firstName;

// Type your first name: John
// Your name is: John

> Eg : 3
  
#include <iostream>
#include <string>
using namespace std;

int main() {
  string fullName;
  cout << "Type your full name: ";
  getline (cin, fullName);
  cout << "Your name is: " << fullName;
  return 0;
}

// Type your full name: sai tejas
// Your name is: sai tejas
  
