#include<iostream>

using namespace std;

int main()
{
	int n;
	int value=0,differnce;
	cin>>n;
	int arr[n];
	int diff[n];
	for(int i=0 ; i<n ; i++)
	{
		cin>>arr[i];
	}
	for(int i=0 ; i<n ; i++)
	{
		if(i==n-1)
		{
			differnce=abs(arr[n-1]-arr[0]);
			diff[n-1]=differnce;
		}
		else
		{
			differnce=abs(arr[i]-arr[i+1]);
			diff[i]=differnce;
		}
	}
	int min=diff[0];
	for(int i=1 ; i<n ; i++)
	{
		if(diff[i]<min)
		{
			min=diff[i];
			value=i;
		}
	}
		if(value==n-1)
			cout<<n<<" "<<"1"<<"\n";
		else
			cout<<value+1<<" "<<value+2<<"\n";
	return 0;
}