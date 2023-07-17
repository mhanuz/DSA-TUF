#include <iostream>
using namespace std;

int findMax(int num1, int num2);

int main() {
  cout << "Max Number is = " << findMax(5,4);
  return 0;
}

int findMax(int num1, int num2){
  return num1 > num2 ?  num1 :  num2;
}
