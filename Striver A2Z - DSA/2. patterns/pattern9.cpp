#include<bits/stdc++.h>
using namespace std;

void get_pattern(int num)
{
	// Upper triangle
	for(int i=1; i<=num; i++)
	{
		for(int j=1; j<=num-i; j++)
		{
			cout << " ";
		}
		for(int k=1; k<=2*i-1; k++)
		{
			cout << "*";
		}
		cout << endl;
	}

	//lower triangle
	for(int i=1; i<=num; i++)
	{
		for(int j=1; j<i; j++)
		{
			cout << " ";
		}
		for(int k=1; k<=num*2 - (i*2-1); k++)
		{
			cout << "*";
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