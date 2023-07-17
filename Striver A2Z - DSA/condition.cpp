#include<bits/stdc++.h>
using namespace std;
int main(){
	int marks;
	cin >> marks;
	if(marks<25) {
		cout <<"F";
	}
	else if(marks<45) {
		cout <<"E";
	}
	else if(marks<50) {
		cout <<"D";
	}
	else if(marks<60) {
		cout <<"C";
	}
	else if(marks<80) {
		cout <<"B";
	}
	else if(marks<101) {
		cout <<"A";
	}
	else {
		cout << "Please enter right value";
	}
	return 0;
} 