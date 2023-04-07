> Ex : 1 - Boolean Expression
  
#include <iostream>
using namespace std;

int main() {
  int x = 10;
  int y = 9;
  cout << (x > y);
  return 0;
}                            # 1


> Ex : 2 - Or even easier
  
#include <iostream>
using namespace std;

int main() {
  cout << (10 > 9);
  return 0;
}                             # 1


> Ex : 3 - (==) operator
  
#include <iostream>
using namespace std;

int main() {
  int x = 10;
  cout << (x == 10);
  return 0;
}                               # 1


> Ex : 4 - (==) operator
  
#include <iostream>
using namespace std;

int main() {
  cout << (10 == 15);
  return 0;
}                                # 0
  
> Ex : 5 - Real Life Example
  
#include <iostream>
using namespace std;

int main() {
int myAge = 25;
int votingAge = 18;
  
cout << (myAge >= votingAge);  // returns 1 (true), meaning 25 year olds are allowed to vote!
return 0;
}                                 # 1
  
  
> Ex : 6 - Real Life Example
  
#include <iostream>
using namespace std;

int main() {
int myAge = 25;
int votingAge = 18;

if (myAge >= votingAge) {
  cout << "Old enough to vote!";
} else {
  cout << "Not old enough to vote.";
  }
return 0;
}

