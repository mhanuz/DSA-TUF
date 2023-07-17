#include <bits/stdc++.h>
using namespace std;

int main()
{
	int times; cin >> times;
	for (int i=0; i<times; i++){
		for (int j=0; j<=i; j++){
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}