#include<iostream>

using namespace std;

int main()
{
	int n,a,b;
	cin>>n>>a>>b;
	int arr[n];
	int sum=0;
	for(int i=a ; i<n ; i++)
	{
		if(n-i-1<=b)
			sum++;
	}
	cout<<sum<<"\n";
	return 0;
}

