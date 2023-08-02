#include<bits/stdc++.h>
using namespace std;
void get_pattern(int n){
	int as_value=65;
	for(int i=1; i<=n; i++)
	{	
		for(int j=1; j<=i; j++)
		{
			cout << (char)as_value << " ";	
		}
		as_value++;
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