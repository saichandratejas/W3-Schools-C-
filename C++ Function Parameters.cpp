#include <iostream>
#include <string>
using namespace std;

void myFunction(string fname) {
  cout << fname<<"\n" ;
}

int main() {
  myFunction("Liam");
  myFunction("Jenny");
  myFunction("Anja");
  return 0;
}
// output : 
Liam
Jenny
Anja
