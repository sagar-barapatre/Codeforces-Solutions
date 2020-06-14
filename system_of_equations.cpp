#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int sum=0;
	for(int a=0 ; a<=n ; a++)
	{
		for(int b=0 ; b<=m ; b++)
		{
			if((pow(a, 2)+b)==n && (pow(b, 2)+a)==m)
				sum++;
		}
	}
	cout<<sum<<"\n";
	return 0;
}