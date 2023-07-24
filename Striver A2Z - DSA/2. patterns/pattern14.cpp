#include<bits/stdc++.h>
using namespace std;

void get_pattern(int n)
{
	for(int i=1; i<=n; i++)
	{
		for(int j=65; j<65+i; j++)
		{
			cout << char(j);
		}
		cout << endl;
	}
}

int main()
{
	int number;
	cin >> number;
	get_pattern(number);
	return 0;
}