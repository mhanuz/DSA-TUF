#include<bits/stdc++.h>
using namespace std;

void get_pattern(int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			cout << " ";
		}
		for(int k=0; k<=i; k++)
		{
			cout << "*" << " ";
		}
		cout << endl;
	}

	for(int i=0; i<n; i++)
	{
		for(int j=1; j<=i; j++)
		{
			cout << " ";
		}
		for(int k=n; k>i; k--)
		{
			cout<< "*" << " ";
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