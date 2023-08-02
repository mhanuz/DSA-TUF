#include<bits/stdc++.h>
using namespace std;

void get_pattern(int n)
{
	for(int i=1; i<=(2*n)-1; i++)
	{
		int k;
		if(i>n) k=(2*n)-i; 
		else k=i;
		// left angle
		for(int j=1; j<=k; j++)
		{
			cout << "*";	
		}
		// spaces
		for(int l=1; l<=(2*n)-(2*k); l++)
		{
			cout <<" "; 
		}
		// right angle
		for(int m=1; m<=k; m++)
		{
			cout << "*";	
		}
		cout << endl;
	}
}

int main()
{
	int number;
	cin >>number;
	get_pattern(number);
	return 0;
}