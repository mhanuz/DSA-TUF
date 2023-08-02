#include<bits/stdc++.h>
using namespace std;

void get_pattern(int n)
{
	for(int i=1; i<=n; i++)
	{
		// loop for spaces
		for(int j=1; j<=n-i; j++)
		{
			cout << " ";
		}
		char ch='A';
		for(int k=1; k<=(i*2)-1; k++)
		{
			cout << ch;
			if(k<i) ch++;
			else ch--;
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