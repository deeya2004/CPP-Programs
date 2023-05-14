#include <iostream>
using namespace std;
int main() {
  int m, n;
  cout << "enter the value of m:" << endl;
  cin >> m;
  int i = 1;
  int j = 1;
  // patterns
  /*pattern1
     ****...
     ****...
     ****...
     ****...
     ....
     ....
     ....
             */
  // code for pattern 1

  cout << "pattern 1" << endl;
  while (i <= m) {

    int k = 1;
    while (k <= m) {
      cout << "*";
      k = k + 1;
    }
    cout << endl;
    i = i + 1;
  }
  // pattern 2
  /* 111...
     222...
     333...
     ...
     ...
     ...
              */
  // code for pattern 2
  cout << "pattern 2" << endl;
  cout << "enter the value of n:" << endl;
  cin >> n;
  while (j <= n) {
    int k = 1;
    while (k <= n) {
      cout << j;
      k = k + 1;
    }
    cout << endl;
    j = j + 1;
  }
}
