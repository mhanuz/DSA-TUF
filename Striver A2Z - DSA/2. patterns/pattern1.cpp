#include<bits/stdc++.h>
using namespace std;

void get_pattern(int num)
{
	for(int i=1; i<=num; i++)
	{
		for(int j=1; j<=num; j++)
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