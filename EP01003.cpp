#include<bits/stdc++.h>

using namespace std; 

int main()
{
	char ans101[15] = {'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
	char ans102[15] = {'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'}; 
	
	int t; 
	cin >> t; 
	while(t--)
	{
		long long n;
		cin >> n; 
		char ans[15]; 
		for(long long i = 0;i<15;i++)
		{
			cin >> ans[i]; 
		}
		double score = 0.00; 
		for(long long i =0;i<15;i++)
		{
			if(n==101 && ans[i]==ans101[i])
			{
				score += 1.00; 
			}
			else if(n==102 && ans[i]==ans102[i])
			{
				score += 1.00;
			}	
		}
		score *= 10.00/15.00; 
		cout << fixed << setprecision(2) << score << endl; 
	} 
}