#include<bits/stdc++.h>

using namespace std; 

long long ucln(long long a,long long b)
{
	if(b==0) return a; 
	while(b)
	{
		long long temp = a%b; 
		a =b; 
		b = temp; 
	}
	return a; 
}// Ham tim uoc chung lon nhat

long long bcnn(long long a,long long b)
{
	return (a*b)/(ucln(a,b)); 
} // ham tim boi chung nho nhat

long long solve(long long a,long long b,long long c,long long d)
{
	long long temp = bcnn(bcnn(a,b),c); 
	long long m = 1ll*pow(10,d-1); 
	long long res = (m+temp-1)/temp*temp; 
	if(res<(long long)pow(10,d)) return res; 
	else return -1; 
} // Ham di giai quyet bai toan

int main()
{
	int t; 
	cin >> t; 
	while(t--)
	{
		long long x,y,z,n; 
		cin >> x >> y >> z >> n; 
		cout << solve(x,y,z,n) << endl; 
	}
}