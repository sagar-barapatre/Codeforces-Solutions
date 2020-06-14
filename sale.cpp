#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n,m,j;
	cin>>n>>m;
	int arr[n];
	for(int i=0 ; i<n ; i++)
	{
		cin>>arr[i];
	}
	for(int i=1 ; i<n; i++)
	{
		int temp;
		temp=arr[i];
		j=i-1;

		while(j>=0 && arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	int new_array[n];
	for(int i=0 ;i<n ; i++)
	{
		new_array[i]=arr[i];
	}
	int sum=0;
	for(int i=0 ; i<m ; i++)
	{
		sum=sum+new_array[i];
	}
	cout<<abs(sum)<<"\n";
	return 0;
}