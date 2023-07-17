#include<bits/stdc++.h>
using namespace std;

void pattern(int num) {
	for (int i=0; i<num; i++) {
		for (int j=0; j<num-i; j++) {
			cout << j+1; 
		}
		cout << endl;
	}
}

int main(){
	int number;
	cin >> number;
	pattern(number);
	return 0;
}