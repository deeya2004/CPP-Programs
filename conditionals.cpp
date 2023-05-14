#include <iostream>
using namespace std;
int main() {
  // conditionals= if,if-else,if-else if, if-else if-else.
  int a, b, c, d, e, i, j;

  // condition 1-if.
  cout << "condition 1" << endl;
  cout << "enter value of a:" << endl;
  cin >> a; // taking input
  if (a > 0) {
    cout << "A is positive" << endl;
  }
  cout<<endl;

  cout << "enter value of b" << endl;
  cin >> b; // cin never reads space, tab, enter
  cout << "value of a and b is :" << a << b << endl;
  cout<<endl;

  cout << "enter value of c:" << endl;
  c = cin.get(); // fron cin.get() we can take space tab or enter as inputs
  cout << "value of c is:" << c << endl;
  cout<<endl;

  
  cout << "Enter the value of d:" << endl;
  cin >> d;
  cout << "enter the value of e:" << endl;
  cin >> e;

  if (d > e) {
    cout << "D is greater" << endl;
  }
  if (d < e) {
    cout << "E is greater" << endl;
  }
  cout<<endl;


  
  // condition 2-if-else.
  cout << "condition 2" << endl;

  cout << "enter the value of i:" << endl;
  cin >> i;
  if (i > 0) {
    cout << "I is positive" << endl;
  } else {
    if (i < 0) {
      cout << "I is negative" << endl;
    } else {
      cout << "I is 0" << endl;
    }
  }
  cout<<endl;

  

  // condition 3-if-else if-else.
  cout << "condition 3" << endl;
  cout << "enter the value of j:" << endl;
  cin >> j;
  if (j > 0) {
    cout << "J is positive" << endl;
  } else if (j < 0) {
    cout << "J is negative" << endl;
  } else {
    cout << "J is 0" << endl;
  }
  cout<<endl;

  // condition 4-if-else if.
  cout << "condition 4" << endl;
  char ch;
  cout << "Enter the character:" << endl;
  cin >> ch;
  if ('a' <= ch <= 'z') {
    cout << "This is LOWERCASE"<<endl;
  } else if ('A' <= ch <= 'Z') {
    cout << "This is UPPERCASE"<<endl;
  } else if ('0' <= ch <= '9') {
    cout << "This is NUMERIC"<<endl;
  }
  cout<<endl<<"END"<<endl;
}
