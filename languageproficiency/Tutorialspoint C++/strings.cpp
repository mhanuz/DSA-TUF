#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
  char str1[10]="Hello";
  char str2[10]="World";
  char str3[10];
  int len;

  strcpy(str3, str1);
  cout << str3 << endl;

  strcat(str1,str2);
  cout << str1 << endl;

  cout << strlen(str1) << endl;
  len = str1.size();
  cout << len << endl;
  return 0;
}
