#include <iostream>
using namespace std;

int main ()
{
  int tc; cin >> tc;
  int RowNum,ColNum,sc,sr,res;
  while (tc--){
    cin >> RowNum >> ColNum;
    sr=(RowNum-2)/3; if((RowNum-2)%3) sr=sr+1;
    sc=(ColNum-2)/3; if((ColNum-2)%3) sc=sc+1;
    cout << sr*sc << endl;
  }
  return 0;
}
