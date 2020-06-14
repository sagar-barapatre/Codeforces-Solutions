#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n],ans[n];
	int sum5=0;
	int sum0=0;
	for(int i=0 ; i<n ; i++)
	{
		cin>>arr[i];
	}
	for(int i=0 ; i<n ; i++)
	{
		if(arr[i]==0)
			sum0++;
		else if(arr[i]==5)
			sum5++;
	}
	if(sum5<=9 && sum0==0)
		cout<<"-1\n";
	else if(sum5>=9 && sum0==0)
		cout<<"-1\n";
	else if(sum5<9 && sum0!=0)
		cout<<"0\n";
	else if(sum5>=9 && sum0>=1)
	{
		int rem;
		rem=sum5-(sum5%9);
		for(int i=0 ; i<rem ; i++)
		{
			ans[i]=5;
		}	
		for(int i=0 ; i<sum0 ; i++)
		{
			ans[rem+i]=0;
		}
		int sagar=rem+sum0;
		for(int i=0 ; i<sagar ; i++)
		{
			cout<<ans[i];
		}
	}
	cout<<"\n";
	return 0;
}