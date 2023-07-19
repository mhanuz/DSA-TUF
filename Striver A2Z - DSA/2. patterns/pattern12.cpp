#include<bits/stdc++.h>
using namespace std;

void get_pattern(int num)
{
	for(int i=1; i<=num; i++)
	{
		for(int j=1; j<=i; j++)
		{
			cout << j;
		}
		for(int k=1; k<=(num*2)-(i*2); k++)
		{
			cout << "*";
		}
		for(int l=i; l>=1; l-- )
		{
			cout << l;
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