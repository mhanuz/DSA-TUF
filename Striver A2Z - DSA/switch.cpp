#include<bits/stdc++.h>
using namespace std;
int main() {
	int dayno;
	cin >> dayno;
	switch(dayno){
		case 1:
			cout << "Mon Day";
			break;
		case 2:
			cout << "Tue Day";
			break;
		case 3:
			cout << "Wed Day";
			break;
		case 4:
			cout << "Thu Day";
			break;
		case 5:
			cout << "Fri Day";
			break;
		case 6:
			cout << "Sat Day";
			break;
		case 7:
			cout << "Sun Day";
			break;
		default:
			cout << "Does not match";
			break;
		cout << "Check inside."; // this line will not print
	}
	cout << " Check Outside.";
	return 0;
}