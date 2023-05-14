#include <iostream>
using namespace std;
int main() {
  // print hello world
  cout << "hello world" << endl;

  // basic datatypes
  int a = 100;
  cout << "a:" << a << endl;

  char b = 'v';
  cout << "b:" << b << endl;

  bool c = true;
  cout << "c:" << c << endl;

  float d = 1.2;
  cout << "d:" << d << endl;

  double e = 1.22;
  cout << "e:" << e << endl;

  int size = sizeof(a);
  cout << "size of a is:" << size << endl;

  int h = 2 / 5;
  cout << "h:" << h << endl;

  char ch = 'a';
  cout << "ch:" << ch << endl;


  // typecasting
  int f = 'a';
  cout << "e:" << e << endl;

  char ch1 = 98;
  cout << "ch1:" << ch1 << endl;

  char ch2 = 123456;
  cout << "ch2:" << ch2 << endl;

  // signed and unsigned
  unsigned int g = 112;
  cout << "g:" << g << endl;

  signed int k = -5;
  cout << "k:" << k << endl;

  // boolean function

  int i = 2;
  int j = 3;

  bool first = (i == j);
  cout << "first:" << first << endl;

  bool second = (i > j);
  cout << "second:" << second << endl;

  bool third = (i < j);
  cout << "third:" << third << endl;

  bool fourth = (i >= j);
  cout << "fourth:" << fourth << endl;

  bool fifth = (i <= j);
  cout << "fifth:" << fifth << endl;

  bool sixth = (i != j);
  cout << "sixth:" << sixth << endl;
}

