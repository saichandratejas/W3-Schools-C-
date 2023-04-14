Strings - Special Characters :
- Because strings must be written within quotes, C++ will misunderstand this string, and generate an error.
  
- The solution to avoid this problem, is to use the backslash escape character.

- The backslash (\) escape character turns special characters into string characters:

1. \' Result is - (')	=Single quote
2. \"	Result is -(")	=Double quote
3. \\	Result is -(\)	=Backslash

> Eg : 1 - Double Quote

#include <iostream>
using namespace std;

int main() {
  string txt = "We are the so-called \"Vikings\" from the north.";
  cout << txt;
  return 0;
}
// We are the so-called "Vikings" from the north.

> Eg : 2 - SIngle Quote

#include <iostream>
using namespace std;

int main() {
  string txt = "It\'s alright.";
  cout << txt;
  return 0;
}
// It's alright.

> Eg : 3 - Backslash

#include <iostream>
using namespace std;

int main() {
  string txt = "The character \\ is called backslash.";
  cout << txt;
  return 0;
}
// The character \ is called backslash.
