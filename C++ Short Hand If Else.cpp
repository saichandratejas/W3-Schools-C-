> Ex : 1
  
#include <iostream>
using namespace std;

int main() {
  int time = 20;
  if (time < 18) {
    cout << "Good day.";
  } else {
    cout << "Good evening.";
  }
  return 0;                     # Good evening.
}

> Ex : 2 - You can simply write:
  
int time = 20;
string result = (time < 18) ? "Good day." : "Good evening.";
cout << result;                  # Good evening.
