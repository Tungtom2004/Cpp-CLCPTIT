#include<bits/stdc++.h>

using namespace std; 

bool chinhphuong(long long n)
{
	if(n<=0) return false;
	else
	{
		if((long long)sqrt(n)*sqrt(n)==n) return true; 
		else return false; 
	}
}

int main()
{
	long long a,b; 
	cin >> a >> b; 
	long long sum = 0; 
	for(long long i =a;i<=b;i++)
	{
		if(chinhphuong(i)==true)
		{
			sum+=i; 
		}
	}
	cout << sum; 
	
}