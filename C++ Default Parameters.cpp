- You can also use a default parameter value, by using the equals sign (=).
- If we call the function without an argument, it uses the default value ("Norway").

void myFunction(string country = "Norway") {
  cout << country << "\n";
}

int main() {
  myFunction("Sweden");
  myFunction("India");
  myFunction();
  myFunction("USA");
  return 0;
}

// Sweden
// India
// Norway
// USA
