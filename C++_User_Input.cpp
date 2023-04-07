> Ex: 1 - C++ User Input
  
#include <iostream>
using namespace std;

int main() {
  int x;
  cout << "Type a number: "; // Type a number and press enter
  cin >> x; // Get user input from the keyboard
  cout << "Your number is: " << x;
  return 0;
}

> Ex: 2 - Creating a Simple Calculator
  
#include <iostream>
using namespace std;

int main() {
  int x, y;
  int sum;
  cout << "Type a number: ";
  cin >> x;
  cout << "Type another number: ";
  cin >> y;
  sum = x + y;
  cout << "Sum is: " << sum;
  return 0;
}

OUTPUT : 

Type a number: 
2

Type another number: 
3

Sum is: 5
