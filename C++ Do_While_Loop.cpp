- The loop will always be executed at least once, even if the condition is false, because the code block is executed before the condition is tested

#include <iostream>
using namespace std;

int main() {
  int i = 0;
  do {
    cout << i << "\n";
    i++;
  }
  while (i < 10);
  return 0;
}

// ouput :
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
