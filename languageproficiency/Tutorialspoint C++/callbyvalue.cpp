#include <iostream>
using namespace std;
// call by value : not change the actual value of argument;
// it is just copyt the argument value into funtional parameter.

void swap(int x, int y);

int main()
{
  int x=100;
  int y=200;
  cout << "Befor x " << x << " and y " << y << endl;
  swap(x,y);
  cout << "After x " << x << " and y " << y << endl;
  return 0;
}

void swap(int x, int y){
  int temp = x;
  x= y;
  y= temp;
  return;
}
