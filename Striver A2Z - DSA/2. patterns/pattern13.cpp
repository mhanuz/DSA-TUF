#include<bits/stdc++.h>
using namespace std;

void get_pattern(int n){
	int c=1;
	for(int j=1; j<=n; j++)
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