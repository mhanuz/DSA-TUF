#include<bits/stdc++.h>
using namespace std;

void boxpatterns(int num) {
	for (int i=0; i<num; i++) {
		for (int j=0; j<num; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

int main() {
	int num;
	cin >> num;
	boxpatterns(num);
	return 0;
}