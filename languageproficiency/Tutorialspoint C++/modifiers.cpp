#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
  unsigned x;
  unsigned int y;

  x=5;
  cout << typeid(y).name() << endl;
  return 0;
}
