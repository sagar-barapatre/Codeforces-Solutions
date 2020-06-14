#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int arra[n];
	for(int i=0 ; i<n ; i++)
	{
		cin>>arra[i];
	}
	int m;
	cin>>m;
	int arrb[m];
	for(int i=0 ; i<m ; i++)
	{
		cin>>arrb[i];
	}
	int k=0;
	int value;
	int arr_max[100];
	for(int i=0 ; i<m ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			if(arrb[i] % arra[j]==0)
			{
				value=arrb[i] / arra[j];
				arr_max[k]=value;
				k++;
			}
		}
	}
	int max=arr_max[0];
	for(int i=1 ; i<k ; i++)
	{
		if(arr_max[i]>=max)
			max=arr_max[i];
	}
	int sum=0;
	for(int i=0 ; i<k ; i++)
	{
		if(arr_max[i]==max)
			sum++;
	}
	cout<<sum<<"\n";
	return 0;
}