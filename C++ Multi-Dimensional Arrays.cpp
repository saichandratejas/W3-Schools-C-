Multi-Dimensional Arrays:
-A multi-dimensional array is an array of arrays
-To declare a multi-dimensional array, define the variable type, specify the name of the array followed by square brackets 
-which specify how many elements the main array has, followed by another set of square brackets which indicates how many elements the sub-arrays have.

>> Ex :
string letters[2][4];

string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};

> Ex : 2 - Access the Elements of a Multi-Dimensional Array

string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};

cout << letters[0][2];  // Outputs "C"  --Remember that: Array indexes start with 0: [0] is the first element. [1] is the second element, etc.


Change Elements in a Multi-Dimensional Array:
- To change the value of an element, refer to the index number of the element in each of the dimensions.
  
>> Ex:

string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};
letters[0][0] = "Z";

cout << letters[0][0];  // Now outputs "Z" instead of "A"


> Ex : 3 - Loop Through a Multi-Dimensional Array: 

#include <iostream>
using namespace std;

int main() {
  string letters[2][4] = {
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
  };

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 4; j++) {
      cout << letters[i][j] << "\n";
    }
  }
  return 0;
}

// output:

A
B
C
D
E
F
G
H
  
