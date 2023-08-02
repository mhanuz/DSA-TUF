#include<bits/stdc++.h>
using namespace std;

void get_pattern(int num)
{
	int starts;
	for(int i=1; i<=2*num-1; i++)
	{
		starts = i;
		if(i > num) starts = 2*num - i;
		for(int j=1; j<=starts; j++)
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