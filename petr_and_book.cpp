#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n,value=-1;
	int rem;
	cin>>n;
	int arr[7];
	for(int i=0 ; i<7 ; i++)
	{
		cin>>arr[i];
	}
	int sum=0;
	for(int i=0 ; i<n ; i++)
	{
		
		for(int j=0 ; j<7 ; j++)
		{
			sum = sum + arr[j];
			rem=(sum-n);
			if(rem>=0)
			{
				if(sum>=n)
				{
					value=j;
					break;
				}
			}
		}
		if(value>-1)
			break;
	}
	cout<<value+1<<"\n";
	return 0;
}