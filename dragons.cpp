#include<iostream>

using namespace std;

int main()
{
	int s,n;
	cin>>s>>n;
	int strength[n];
	int bonus[n];
	for(int i=0 ; i<n ; i++)
	{
		cin>>strength[i];
		cin>>bonus[i];
	}
	int new_strength;
	for (int i = 0; i < n; ++i)
	{
		if(s-strength[i]<0)
		{
			cout<<"NO\n";
			break;
		}
		else if(s-strength[i]>=0)
		{
			new_strength=s+bonus[i];
			s=new_strength;
			if(i==n-1)
				cout<<"YES\n";
		}
	}
	return 0;
}