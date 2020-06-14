#include<iostream>

using namespace std;

int main()
{
	int n,sum=0;
	cin>>n;
	int arr[n];
	for(int i=0; i<n ; i++)
	{
		cin>>arr[i];
	}
	for(int i=0 ; i<n ; i++)
	{
		sum=sum+arr[i];
	}
	int value=0;
	for(int i=1 ; i<=5 ; i++)
	{
		if((sum+i)%(n+1)!=1)
			value++;
	}
	cout<<value<<"\n";
	return 0;
}