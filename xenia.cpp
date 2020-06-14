#include<iostream>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int arr[100000];
	for(int i=0 ; i<m ; i++)
	{
		cin>>arr[i];
	}
	int sum=0;
	for(int i=1 ; i<arr[0] ; i++)
	{
		sum++;
	}
	int value1=0,sum1=0;
	int value2=0,sum2=0;
	for(int i=1 ; i<m ; i++)
	{
		if(arr[i]<arr[i-1])
		{
			value1=(2*n)-arr[i-1]-arr[i];
			sum1=sum1+value1;
		}
		else if(arr[i]>arr[i-1])
		{
			value2=arr[i]-arr[i-1];
			sum2=sum2+value2;
		}
	}
	cout<<sum+sum1+sum2<<"\n";
	return 0;
}