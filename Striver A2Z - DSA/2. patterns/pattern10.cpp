#include<bits/stdc++.h>
using namespace std;

void get_pattern(int n)
{
	int stars;
	for(int i=1; i<=n*2-1; i++)
	{
		stars=i;
		if(i>n) stars = n*2-i;
		for(int j=1; j<=stars; j++)
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