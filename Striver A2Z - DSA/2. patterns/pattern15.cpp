#include<bits/stdc++.h>
using namespace std;

void get_pattern(int n)
{
	for(int i=1; i<=n; i++)
	{
		int ascii_value=65;
		for(int j=n; j>=i; j--)
		{
			cout << char(ascii_value) << " ";
			ascii_value++;
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