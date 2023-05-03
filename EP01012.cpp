#include<bits/stdc++.h>

using namespace std; 

long long solve(long long n)
{
	long long res = n; 
	for(long long i = 2;i<=3;i++)
	{
		while(res%i==0)
		{
			res /=i; 
		}
	}
	return res;
}


int main()
{
	int t; cin >> t; 
	while(t--)
	{
		long long a;long long b; 
		cin >> a >> b; 
		if(solve(a)==solve(b)) cout << "YES\n"; 
		else cout << "NO\n"; 
	}
}