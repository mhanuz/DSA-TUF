#include<bits/stdc++.h>
using namespace std;


void get_pattern(int n)
{
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			if(i==1 || i==n || j==1 || j==n) cout << "*";	

			else cout << " ";
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