#include<bits/stdc++.h>
using namespace std;

void patterns(int num) {
	for (int i=1; i<=num; i++) {
		for (int j=1; j<=i; j++) {
			cout << i;
		}
		cout << endl;
	}
}

int main() {
	int num;
	cin >> num;
	patterns(num);
	return 0;
}