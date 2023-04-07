- To get the size of an array, you can use the sizeof() operator
  
> Ex:

int myNumbers[5] = {10, 20, 30, 40, 50};
cout << sizeof(myNumbers);

//output:  20
-Why did the result show 20 instead of 5, when the array contains 5 elements?
-It is because the sizeof() operator returns the size of a type in bytes.
-You learned from the Data Types chapter that an int type is usually 4 bytes, so from the example above, 4 x 5 (4 bytes x 5 elements) = 20 bytes.
-To find out how many elements an array has, you have to divide the size of the array by the size of the data type it contains.
  
  
>> Perfect Code :  

int myNumbers[5] = {10, 20, 30, 40, 50};
int getArrayLength = sizeof(myNumbers) / sizeof(int);
cout << getArrayLength;

// output : 5

> Ex:

#include <iostream>
using namespace std;

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  for (int i = 0; i < sizeof(myNumbers) / sizeof(int); i++) {
    cout << myNumbers[i] << "\n";
  }
  return 0;
}

// output:

10
20
30
40
50
