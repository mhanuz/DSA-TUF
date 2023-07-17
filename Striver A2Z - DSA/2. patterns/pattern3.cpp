#include<bits/stdc++.h>
using namespace std;
void patterns(int num) {
	for (int i=1; i<=num; i++) {
		for (int j=1; j<=i; j++) {
			cout << j;
		}
		cout << endl;
	}
}
int main(){
	int number;
	cin >> number;
	patterns(number);
	return 0;
}