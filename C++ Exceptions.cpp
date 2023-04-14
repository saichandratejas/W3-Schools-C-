C++ try and catch :
- Exception handling in C++ consist of three keywords: try, throw and catch.
 
SYNTAX :  
try {
  // Block of code to try
  throw exception; // Throw an exception when a problem arise
}
catch () {
  // Block of code to handle errors
}

> Eg : 1
 
#include <iostream>
using namespace std;

int main() {
  try {
    int age = 15;
    if (age >= 18) {
      cout << "Access granted - you are old enough.";
    } else {
      throw (age);
    }
  }
  catch (int myNum) {
    cout << "Access denied - You must be at least 18 years old.\n";
    cout << "Age is: " << myNum;  
  }
  return 0;
}
// Access denied - You must be at least 18 years old.
// Age is: 15

> Eg : 2
 
 #include <iostream>
using namespace std;

int main() {
  try {
    int age = 15;
    if (age >= 18) {
      cout << "Access granted - you are old enough.";
    } else {
      throw 505;
    }
  }
  catch (int myNum) {
    cout << "Access denied - You must be at least 18 years old.\n";
    cout << "Age is:"<<myNum;
  }
  return 0;
}
// Access denied - You must be at least 18 years old.
// Age is:505
