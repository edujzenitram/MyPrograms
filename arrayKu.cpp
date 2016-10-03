#include<iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int foo[3] = {};
  int *p;

  cout << "\n" << sizeof(int);
  cout << "\n" << sizeof(foo);
  cout << "\n" << sizeof(*foo);


  int lenFoo = sizeof(foo)/sizeof(*foo); //returns how many elements array foo can store
  cout <<  "\nlength " <<lenFoo;
  for(int i=0; i<foo.length(); i++){
    cout << "foo @ " <<foo[i];
  }

  return 0;
}
