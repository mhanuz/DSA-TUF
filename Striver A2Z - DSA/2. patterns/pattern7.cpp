#include<bits/stdc++.h>
using namespace std;

void get_pattern(int n)
{
	for(int i=0; i<n; i++)
	{
		for(int k=1; k<=i; k++)
		{
			cout << " ";
		}
		for(int j=1; j<=(2*n)-(2*i+1); j++)
		{
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