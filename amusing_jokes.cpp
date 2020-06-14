#include<iostream>
#include<cstring>

using namespace std;

long long int factorial(int n, int m)
{
	long long int sum;
	for(int i = n ; i>=0 ; i--)
		sum = (sum*i)%m;

		return sum;
}

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int tcs;
	cin>>tcs;
	while(tcs--)
	{
		int n,m;
		cin>>n>>m;
		factorial(n,m);

	}
}