#include <iostream>
using namespace std;

int main()
{
  int a=10, b=20;
  // arithmetic operator
  cout << "addition=" <<a+b << endl;
  cout << "substraction="<<a-b << endl;
  cout << "Multiplication=" << a*b << endl;
  cout << "division=" << a/b << endl;
  cout << "modulus=" << a%b << endl;
  cout << "pre increment=" << ++a <<endl;
  cout << "post increment=" << a++ <<endl;
  cout << "result=" << a<< endl;
  std::cout << "decrement=" << --b <<endl;

  // relational operator ==,<,>,<=,>=,!=
  if (a>b){
    cout << "true" << endl;
  }
  else{
    std::cout << "false" << endl;
  }

  // logical operator
  if (a<20 && !(b>20)){
    cout << "True"<<endl;
  }
  else{
    cout << "False" <<endl;
  }

  //Assignment operator
  

  return 0;
}
