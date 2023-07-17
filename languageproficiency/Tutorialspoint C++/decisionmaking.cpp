#include <iostream>
using namespace std;
int main ()
{
  int a=30;

  if (a<10){
    cout << a << "is less than 20" << endl;
  }
  else if(a==20){
    cout << a << "is equal to 20" << endl;
  }
  else if (a==30){
    cout << a << "is equal to 30" << endl;
  }
  else{
    cout << "value of a is"<< a << endl;
  }

  return 0;
}
