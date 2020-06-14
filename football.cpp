#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	string arr[n];
	string arr1[n];
	string arr2[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	string value1;
	string value2;
	for(int i=0 ; i<n ; i++)
	{
		if(arr[i]==arr[0])
		{
			arr1[i]=arr[i];
			value1=arr[i];
		}
		else
		{
			arr2[i]=arr[i];
			value2=arr[i];
		}
	}
	int sum1=0;
	int sum2=0;
	for(int i=0 ; i<n ; i++)
	{
		if(arr1[i]==value1)
			sum1++;
		else if(arr2[i]==value2)
			sum2++;
	}
	if(sum1>sum2)
		cout<<value1<<"\n";
	else if(sum2>sum1)
		cout<<value2<<"\n";
	return 0;
}