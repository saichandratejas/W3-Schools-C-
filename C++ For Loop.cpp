- When you know exactly how many times you want to loop through a block of code, use the for loop instead of a while loop

#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 15; i++) {
    cout << i << "\n";
  }
  return 0;
}

// output

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
