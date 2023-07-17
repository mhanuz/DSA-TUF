#include<bits/stdc++.h>
using namespace std;

void stChange(string &s) {
	s[0]='t';
	cout << "function block " << s << endl;
}
int main() {
	string s;
	cin >> s;
	cout << "befor calling function " << s << endl;
	stChange(s);
	cout << "after calling function " << s << endl;
}