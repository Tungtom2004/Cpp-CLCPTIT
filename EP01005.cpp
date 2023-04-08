#include<bits/stdc++.h>

using namespace std; 

bool sphenic(long long n)
{
	long long res = 0; 
	for(int i = 2;i <= sqrt(n);i++)
	{
		long long dem = 0; 
		while(n%i==0)
		{
			dem++; 
			n /= i; 
		}
		if(dem>=2) return false; 
		if(dem==1) res++; 
	}
	if(n!=1) res++; 
	return res == 3; 
}

int main()
{
	int t; 
	cin >> t; 
	while(t--)
	{
		long long n;
		cin >> n; 
		if(sphenic(n)) cout << "1"; 
		else cout << "0"; 
		cout << endl; 
	}
}