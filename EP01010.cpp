#include<bits/stdc++.h>

using namespace std; 

bool check(long long n,long long k)
{
	if(k==0) return false; 
	else
	{
		long long sum = 0; 
		for(long long i =1;i<=n;i++)
		{
			sum += (i%k); 
		}
		if(sum==k) return true;
		else return false; 
	}
}

int main()
{
	int t;
	cin >> t; 
	while(t--)
	{
		long long n,k; 
		cin >> n >> k; 
		if(check(n,k)) cout << "1" << endl; 
		else cout << "0" << endl; 
	}
}