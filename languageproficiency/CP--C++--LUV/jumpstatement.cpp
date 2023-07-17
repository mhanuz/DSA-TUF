#include <bits/stdc++.h>
using namespace std;
int main()
{
	int num ; cin >> num;
	int s=0,m;
	while(num!=0){
		m=num%10;
		num=num/10;
		s+=m;
	}
	cout << s;
	return 0;
}