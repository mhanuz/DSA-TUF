#include <iostream>
using namespace std;
#include <iomanip>
using std::setw;

int main ()
{
  int n[10];
  for (int i=0; i<10; i++){
    cout << i << "-th Position =";
    cin >> n[i];

  }
  cout << "Output is below"<< endl;
  for (int j=0; j<10; j++){
    cout << n[j] << endl;
  }

  return 0;
}
