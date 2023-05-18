#include <iostream>
using namespace std;
int main() {
  /* //pattern 12
        *
       **
      ***
     ****
    .....
          */

  // code for this pattern

  cout << "pattern 12-" << endl;
  int m;
  cout << "enter the value of m:" << endl;
  cin >> m;
  int a = 1;
  while (a <= m) {
    int space = m - a;
    while (space) {
      cout << " ";
      space = space - 1;
    }
    int k = 1;
    while (k <= a) {
      cout << "*";
      k = k + 1;
    }
    cout << endl;
    a = a + 1;
  }

  cout << endl;

  /* //pattern 13
   ****
   ***
   **
   *
   */

  // code for this pattern

  cout << "pattern 13-" << endl;
  int n;
  cout << "enter the value of n:" << endl;
  cin >> n;
  int b = 0;
  while (b <= n) {
    int k = 1;
    while (k <= n - b) {
      cout << "*";
      k = k + 1;
    }
    cout << endl;
    b = b + 1;
  }
  cout << endl;

  /* //pattern 14
   ****
   ***
   **
   *
   */

  // code for this pattern
  cout << "pattern 14-" << endl;
  int o;
  cout << "enter the value of o:" << endl;
  cin >> o;
  int c = 0;
  while (c <= o) {
    int k = 1;
    while (k <= c) {
      cout << " ";
      k = k + 1;
    }
    c = c + 1;
    int value = 0;
    while (value <= o - c) {
      cout << "*";
      value = value + 1;
    }
    cout << endl;
  }
};

