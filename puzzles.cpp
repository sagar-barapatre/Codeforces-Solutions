#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n,m,j;
	cin>>n>>m;
	int arr[m];
	for(int i=0 ; i<m ; i++)
	{
		cin>>arr[i];
	}
	for(int i=1 ; i<m; i++)
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
	int k=0;
	int new_arr[128]={0};
	for(int i=0 ; i<m ; i++)
	{
		if(i>=m-n+1)
		{
			break;
		}
		new_arr[k]=arr[i+n-1]-arr[i];
		k++;
		
	}
	int min=new_arr[0];
	for(int i=1 ; i<k ; i++)
	{
		if(new_arr[i]<min)
			min=new_arr[i];
		else
			continue;
	}
	cout<<abs(min)<<"\n";
	return 0;
}