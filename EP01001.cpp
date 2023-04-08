#include<bits/stdc++.h>

using namespace std; 

int main()
{
	int t;
	cin >> t; 
	while(t--)
	{
		char c;
		cin >> c; 
		if(c >= 'a' && c <= 'z')
		{
			cout << (char)((long long)c-32); 
		}
		else if(c >= 'A' && c <= 'Z')
		{
			cout << (char)((long long)c+32); 
		}
		cout << endl; 
	}
	return 0; 
}