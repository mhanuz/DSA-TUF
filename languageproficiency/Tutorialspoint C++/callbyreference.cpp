#include <iostream>
using namespace std;

void swap(int &x, int &y){
  int temp =x;
  x=y;
  y=temp;
  return;
}

int main ()
{
  int a = 10;
  int b = 20;
  cout << "Before a " << a << " and b " << b << endl;
  swap ( a, b);
  cout << "After a " << a << " and b " << b << endl;
  return 0;
}
