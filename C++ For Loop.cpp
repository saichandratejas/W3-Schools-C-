- When you know exactly how many times you want to loop through a block of code, use the for loop instead of a while loop

#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 15; i++) {
    cout << i << "\n";
  }
  return 0;
}

// output:

0
1
2
3
4
5
6
7
8
9
10
11
12
13
14

> Ex : 2 
  
#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i <= 10; i = i + 2) {
    cout << i << "\n";
  }
  return 0;
}

// output:

0
2
4
6
8
10
  

> Ex : 3 - Nested Loops
  
#include <iostream>
using namespace std;

int main() {
  // Outer loop
  for (int i = 1; i <= 2; ++i) {
    cout << "Outer: " << i << "\n";  // Executes 2 times
    
    // Inner loop
    for (int j = 1; j <= 3; ++j) {
      cout << " Inner: " << j << "\n";  // Executes 6 times (2 * 3)
    }
  }
  return 0;
}

// output:

Outer: 1
 Inner: 1
 Inner: 2
 Inner: 3
Outer: 2
 Inner: 1
 Inner: 2
 Inner: 3

> Ex : 4 - The foreach Loop

#include <iostream>
using namespace std;

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  for (int i : myNumbers) {
    cout << i << "\n";
  }
  return 0;
}

//output:

10
20
30
40
50
  

