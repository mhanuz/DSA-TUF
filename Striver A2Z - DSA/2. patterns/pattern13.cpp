#include<bits/stdc++.h>
using namespace std;

void get_pattern(int num)
{
	int range_of_num=0;
	for(int i=1; i<=num; i++)
	{
		range_of_num += i;
	}
	int c = 1;
	for(int j=1; j<=num; j++)
	{
		for(int k=1; k<=j; k++)
		{
			cout << c << " ";
			c++;
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