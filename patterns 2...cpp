#include <iostream>
using namespace std;
int main(){
/*  //pattern 6-
  *
  **
  ***
  ....
        */
  //code for this pattern
  cout<<"pattern 6"<<endl;
  int m;
  cout<<"enter the value of m :"<<endl;
  cin>>m;
  int a=1;
  while (a<=m){
    int k=1;
    while (k<=a){
      cout<<"*";
      k=k+1;
    }
    cout<<endl;
    a=a+1;
  }

  cout<<endl;

/* //pattern 7-
  1
  22
  333
  4444
  .....
        */
  //code for this pattern
  cout<<"pattern 7"<<endl;
  int n;
  cout<<"enter the value of n :"<<endl;
  cin>>n;
  int b=1;
  while (b<=m){
    int k=1;
    while (k<=b){
      cout<<b;
      k=k+1;
    }
    cout<<endl;
    b=b+1;
  }

  cout<<endl;

  /* //pattern 8-
  1
  2 3
  4 5 6
  7 8 9 10
  . . . . . 
        */
  //code for this pattern
cout<<"pattern 8"<<endl;
  int o;
  cout<<"enter the value of o :"<<endl;
  cin>>o;
  int c=1;
  int count=1;
  while (c<=o){
    int k=1;
    while (k<=c){
      cout<<count<<" ";
      count=count+1;
      k=k+1;
    }
    cout<<endl;
    c=c+1;
  }

  cout<<endl;

   /* //pattern 9-
  1
  2 3
  3 4 5
  4 5 6 7
  . . . . .
        */
  //code for this pattern
cout<<"pattern 9"<<endl;
  int p;
  cout<<"enter the value of p :"<<endl;
  cin>>p;
  int d=1;
  while (d<=p){
    int k=1;
    int value=d;
    while (k<=d){
      cout<<value<<" ";
      value=value+1;
      k=k+1;
    }
    cout<<endl;
    d=d+1;
  }

  cout<<endl;

/* //pattern 10-
  1
  2 1
  3 2 1
  4 3 2 1
  . . . . .
        */
  //code for this pattern
  cout<<"pattern 10"<<endl;
  int q;
  cout<<"enter the value of q: "<<endl;
  cin>>q;
  int e=1;
  while (e<=q){
    int k = 1;
    while (k<=e){
      cout<<e-k+1;
      k=k+1;
    }
    cout<<endl;
    e=e+1;
  }

  cout<<endl;

  /* //pattern 11-
  5
  543
  5432
  54321
        */
  //code for this pattern
  cout<<"pattern 11"<<endl;
  int r;
  cout<<"enter the value of r: "<<endl;
  cin>>r;
  int f=1;
  while (f<=r){
    int k = 1;
    while (k<=f){
      cout<<r-k+1;
      k=k+1;
    }
    cout<<endl;
    f=f+1;
  }
 
};

