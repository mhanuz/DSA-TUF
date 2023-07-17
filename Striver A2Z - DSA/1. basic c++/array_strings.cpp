#include <bits/stdc++.h>
using namespace std;
int main () 
{
	/*int arr[3][5];
	arr[1][3] = 88;
	cout << arr[1][3];
	*/

	string s="striver";
	int len = s.size();
	s[len-1] = 'z';
	cout<< s[len-1];
	return 0;
}