#include<bits/stdc++.h>
using namespace std;

void get_pattern(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n+1-i; j++)
        {
            cout << "*";
        }
        for(int l=1; l<i; l++)
        {
            cout << "  ";
        }
        for(int k=1; k<=n+1-i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout << "*";
        }
        for(int l=i; l<n; l++)
        {
            cout << "  ";
        }
        for(int k=1; k<=i; k++)
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
}