#include<bits/stdc++.h>

using namespace std; 

long long GCD(long long a,long long b)
{
	if(b==0) return a; 
	while(b)
	{
		long long tmp = a%b; 
		a = b; 
		b = tmp; 
	}
	return a; 
}

void solve(long long a,long long b,long long c)
{
	long long res = GCD(b,c); 
	for(long long i = 1;i<=res;i++)
	{
		cout << a; 
	}
}

int main()
{
	int t; 
	cin >> t;
	while(t--)
	{
		long long a,x,y; 
		cin >> a >> x >> y; 
		solve(a,x,y); 
		cout << endl; 
		
	}
}