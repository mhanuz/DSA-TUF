#include<bits/stdc++.h>
using namespace std;

void get_pattern(int n)
{
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=i; j++)
		{
			cout << j << " ";
		}

		for (int l=1; l<=((n*2)-(i*2))*2; l++)
		{
			cout << " ";
		}

		for(int k=i; k>=1; k--)
		{
			cout << k << " ";
		}
		cout << endl;
	}

}

int main()
{
	int n;
	cin >> n;
	get_pattern(n);
	return 0;
}
