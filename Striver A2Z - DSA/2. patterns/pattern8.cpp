#include<bits/stdc++.h>
using namespace std;

void get_pattern(int num)
{
	for(int i=0; i<=num; i++)
	{
		for(int k=0; k<=i; k++)
		{
			cout << " ";
		}

		for(int j=1; j<=2*num-(i*2+1); j++)
		{
			cout << '*';
		}
		cout << endl;
	}
}
int main()
{
	int num;
	cin >> num;
	get_pattern(num);
	return 0;
}