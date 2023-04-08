#include<bits/stdc++.h>

using namespace std; 

void solve(char c[])
{
	for(long long i = 0;i<strlen(c)-2;i++)
	{
		if(c[i]=='0' && c[i+1]=='8' && c[i+2]=='4')
		{
			c[i] = c[i+1] = c[i+2] = 'x'; 
		}
	}
	for(long long i = 0;i<strlen(c);i++)
	{
		if(c[i]!='x') cout << c[i]; 
	}
	cout << endl; 
}

int main()
{
	int t; 
	cin >> t; 
	while(t--)
	{
		char c[1000]; 
		cin >> c; 
		solve(c); 
	}
}