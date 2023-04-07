Creating References:
- A reference variable is a "reference" to an existing variable, and it is created with the & operator
  
>> Ex:

string food = " Pizza";  // food variable
string &meal = food;    // reference to food 

// output :
Pizza
Pizza


Memory Address:
- can also be used to get the memory address of a variable; which is the location of where the variable is stored on the computer.
- When a variable is created in C++, a memory address is assigned to the variable. And when we assign a value to the variable, it is stored in this memory address.
- To access it, use the & operator, and the result will represent where the variable is stored.
  
  > Ex :

#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";

  cout << &food;
  return 0;
}
// output: 0x6dfed4
