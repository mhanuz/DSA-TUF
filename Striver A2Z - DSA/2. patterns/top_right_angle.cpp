#include<bits/stdc++.h>
using namespace std;

void pattern(int num) {
	for (int i=0; i<num; i++) {
		for (int j=num; j>i; j--) {
			cout << "*" ;
		}
		cout << endl;
	}
}

int main() {
	int number;
	cin >> number;
	pattern(number);
	return 0;
}