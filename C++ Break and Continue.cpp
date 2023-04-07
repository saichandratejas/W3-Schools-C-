- The break statement can also be used to jump out of a loop.
  
> Ex : 1 - C++ Break

#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 10; i++) {
    if (i == 4) {
      break;
    }
    cout << i << "\n";
  } 
  return 0;
}

//output:

0
1
2
3
  
C++ Continue: -if a specified condition occurs it breaks one iteration (in the loop),  and continues with the next iteration in the loop.

> Ex : 2 - C++ Continue

#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 10; i++) {
    if (i == 4) {
      continue;
    }
    cout << i << "\n";
  }   
  return 0;
}


// output:

0
1
2
3
5
6
7
8
9
  
> Ex : 3 - Break in While Loop

#include <iostream>
using namespace std;

int main() {
  int i = 0;
  while (i < 10) {
    cout << i << "\n";
    i++;
    if (i == 4) {
      break;
    }
  } 
  return 0;
}

//output:

0
1
2
3

  
> Ex : 4 - Continue in While Loop

#include <iostream>
using namespace std;

int main() {
  int i = 0;
  while (i < 10) {
    if (i == 4) {
      i++;
      continue;
    }
    cout << i << "\n";
    i++;
  } 
  return 0;
}

//output:

0
1
2
3
5
6
7
8
9
