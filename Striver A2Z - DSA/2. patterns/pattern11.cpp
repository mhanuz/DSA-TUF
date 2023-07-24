#include<bits/stdc++.h>
using namespace std;

void get_pattern(int num)
{
	for(int i=1; i<=num; i++)
		{
			for(int j=1; j<=i; j++)
			{
				if((i%2==0) && (j%2==1))
				{
					cout << 0 << " ";
				}
				else if((i%2==1) && (j%2==0))
				{
					cout << 0 << " ";
				}
				else cout << 1 << " ";
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