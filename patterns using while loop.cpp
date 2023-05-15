#include <iostream>
using namespace std;
int main() {
  
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
  int m;
  cout<< "pattern 1"<<endl;
  cout << "enter the value of m:" << endl;
  cin >> m;
  int i = 1;

  while (i <= m) {

    int k = 1;
    while (k <= m) {
      cout << "*";
      k = k + 1;
    }
    cout << endl;
    i = i + 1;
  }

  cout<<endl;
  
  // pattern 2
  /* 111...
     222...
     333...
     ...
     ...
     ...
              */
  // code for pattern 2
  int n;
  int j = 1;
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
  cout<<endl;

 /* //pattern 3-
  1234...
  1234...
  1234...
  ....
  ....
  ....
             */
//code for this pattern
  int o;
  cout << "pattern 3" << endl;
  cout << "enter the value of o:" << endl;
  cin>>o;
  int a=1;
  while(a<=o){
    int k=1;
    while (k<=n){
      cout<<k;
      k=k+1;
    }
    cout<<endl;
    a=a+1;
  }
  cout<<endl;

  /* //pattern 4-
    ...4321
    ...4321
    ...4321
       ....
       ....
       ....
               */
  int p;
  int b=1;
  cout << "pattern 4" << endl;
  cout << "enter the value of p:" << endl;
  cin>>p;
  while (b<=p){
    int k=1;
    while(k<=p){
      cout<<p-k+1;
      k=k+1;
    }
    cout<<endl;
    b=b+1;
  }
  cout<<endl;

 /* //pattern 5-
  123
  456
  789
      */
  //code for this pattern
  int q;
  int c=1;
  cout << "pattern 5" << endl;
  cout << "enter the value of q:" << endl;
  cin>>q;
  int count=1;
  while(c<=q){
    int k=1;
    while(k<=q){
      cout<<count<<" ";
      count=count+1;
      k=k+1;
    }
    cout<<endl;
    c=c+1;
  }
};
