#include <iostream>
using namespace std;

int main ()
{
	int tc; cin>>tc;
	int rn,cn,sr,sc;
	while(tc--){
		cin >> rn>>cn;
		sr = (rn-2)/3; if((rn-2)%3) sr=sr+1;
		sc = (cn-2)/3; if((cn-2)%3) sc=sc+1;
		cout << sr*sc << endl;
	}
	return 0;
}