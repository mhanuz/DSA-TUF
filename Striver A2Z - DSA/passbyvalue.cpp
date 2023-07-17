#include<bits/stdc++.h>
using namespace std;

void doSomething(int num) {
	cout << "Function block start\n";
	num +=5;
	cout << num<< endl;
	num+=5;
	cout << num << endl;
	num+=5;
	cout << num << endl;
	cout << "Function block end\n";
}

int main() {
	int num;
	cin >> num;
	cout << "before calling function: " << num << endl;
	doSomething(num); // pass by value
	cout << "after calling function " << num << endl;

}