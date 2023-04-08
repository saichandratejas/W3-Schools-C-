- A function is a block of code which only runs when it is called.
- Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times.
  
  > Ex : 1
    
#include <iostream>
using namespace std;

void myFunction() {
  cout << "I just got executed!";
}

int main() {
  myFunction();
  return 0;
}  

// outputs : I just got executed!


> Ex : 2
  
void myFunction() {
  cout << "I just got executed!\n";
}

int main() {
  myFunction();
  myFunction();
  myFunction();
  return 0;
}

// I just got executed!
// I just got executed!
// I just got executed!
