#include<bits/stdc++.h>
using namespace std;

void get_pattern(int num)
{
	int start;
	for(int i=1; i<=num; i++)
	{
		if(i%2==1) start = 1;
		else start=0;
		for(int j=1; j<=i; j++)
		{
			cout << start << " ";
			start = 1 - start;
		}
			cout << endl;
	}
}

int main ()
{
	int num;
	cin >> num;
	get_pattern(num);
	return 0;
}