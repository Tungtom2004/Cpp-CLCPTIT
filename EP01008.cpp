#include<bits/stdc++.h>

using namespace std; 

bool fibo(long long n)
{
	if(n==0) return true; 
	else if(n==1) return true; 
	long long fn2 = 0,fn1 = 1,fn; 
	for(long long i = 2;i <= n+1;i++)
	{
		fn = fn1 + fn2; 
		if(fn==n) return true; 
		else
		{
			fn2 = fn1;
			fn1 = fn; 
		}
	}
	return false; 
}

int main()
{
	int t; cin >> t; 
	while(t--)
	{
		long long n; cin >> n; 
		long long a[n]; 
		for(long long i = 0;i < n;i++)
		{
			cin >> a[i]; 
		}
		for(long long i = 0;i < n;i++)
		{
			if(fibo(a[i]))
			{
				cout << a[i] << " "; 
			}
		}
		cout << endl; 
	}
}