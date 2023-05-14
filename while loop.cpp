#include <iostream>
using namespace std;
int main() {
  // while loop
  int m,n;
  cout<<"enter the value of m:"<<endl;
  cin >> m;
  int i = 2;

   //sum of positive even numbers from 2 to n

    int sum=0;
    while(i<=m){
      if (i%2==0){
        sum=sum+i;
      }
      i=i+1;
    }
    cout<<"sum of even numbers is:"<<sum<<endl;

  cout<<endl;

  
  // prime number
  cout<<"enter the value of n"<<endl;
  cin>>n;
  while (i < n) {
    if (n % i == 0) {
      cout << "Not Prime for" << i << endl;
    } else {
      cout << "Prime for" << i << endl;
    }
    i=i+1;
  }
  

}
