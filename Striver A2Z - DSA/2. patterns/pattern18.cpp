#include<bits/stdc++.h>
using namespace std;

void get_pattern(int n)
{
	for(int i=1; i<=n; i++)
	{
		int starting_char = 64+n;
		for(int j=1; j<=i; j++)
		{
			cout << (char)starting_char << " ";
			starting_char--;
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