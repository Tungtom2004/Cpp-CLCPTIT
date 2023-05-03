#include<bits/stdc++.h>

using namespace std; 

long long prime[1000001]; 

void sieve()
{
	for(long long i =0;i<=1000000;i++)
	{
		prime[i] = 1; 
		prime[0] = prime[1] = 0; 
	}
	for(long long i =2;i<=1000;i++)
	{
		if(prime[i])
		{
			for(long long j = i*i;j<=1000000;j+=i)
			{
				prime[j] = 0; 
			}
		}
	}
}

int main()
{
	int t; 
	cin >> t;
	while(t--)
	{
		sieve(); 
		long long n;
		cin >> n; 
		long long dem = 0; 
		for(long long i =2;i<=n/2;i++)
		{
			long long j = n-i; 
			if(prime[i]&&prime[j])
			{
				dem++; 
				cout << i << " " << j << " "; 
				break;  
			}
		}
		if(dem==0) cout << "-1"; 
		cout << endl; 
		
	}
		
}