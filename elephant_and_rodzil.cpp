#include<iostream>

using namespace std;

int main()
{
	long long int n,value;
	cin>>n;
	long long int arr[n];
	for(int i=0 ; i<n ; i++)
	{
		cin>>arr[i];
	}
	int min=arr[0];
	for(int i=1 ; i<n ; i++)
	{
		if(arr[i]<min)
			min=arr[i];
			value=i;
		else 
			continue;
	}
	int sum=0;
	for(int i=0 ; i<n ; i++)
	{
		if(arr[i]==min)
			sum++;
	}
	if(sum==1)
		cout<<value+1<<"\n";
	else if(sum>1)
		cout<<"Still Rozdil\n";
	return 0;
}