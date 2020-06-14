#include<iostream>

using namespace std;

int main()
{
	long long int n;
	cin>>n;
	int arr[n];
	long long int value;
	for(int i=0 ; i<n ; i++)
	{
		cin>>arr[i];
	}
	long long int max=arr[0];
	long long int min=arr[0];
	for(int i=1 ; i<n ; i++)
	{
		if(arr[i]<min)
			min=arr[i];
		else if(arr[i]>max)
			max=arr[i];
	}
	long long int sum1=0;
	long long int sum2=0;
	for(int i=0 ; i<n ; i++)
	{
		if(arr[i]==max)
			sum1++;
		else if(arr[i]==min)
			sum2++;
	}
	if(sum1==n || sum2==n)
		cout<<"0 "<<n*(n-1)/2<<"\n";
	else if(sum1>=2 || sum2>=2)
	{
		value=sum1*sum2;
		cout<<max-min<<" "<<value<<"\n";
	}
	else
		cout<<max-min<<" 1\n";
	return 0;
}