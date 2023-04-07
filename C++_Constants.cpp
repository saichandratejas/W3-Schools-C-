> Ex: 1 - Constants

#include <iostream>
using namespace std;

int main() {
  const int myNum = 15; // myNum will always be 15
  myNum = 10;  // error: assignment of read-only variable 'myNum'
  cout << myNum;
  return 0;
} 

> Ex: 2 - Constants

#include <iostream>
using namespace std;

int main() {
  const int minutesPerHour = 60;
  const float PI = 3.14;
  cout << minutesPerHour << "\n";
  cout << PI;
  return 0;
  }                    #  60
                       #  3.14

