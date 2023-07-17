#include<bits/stdc++.h>
using namespace std;

void get_pattern(int num) {
	for (int i=1; i<=num; i++) {
		for (int k=1; k<=num-i; k++){
			cout <<" ";
		}
		for (int j=1; j<=2*i-1; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

int main(){
	int number;
	cin >> number;
	get_pattern(number);
	return 0;
}