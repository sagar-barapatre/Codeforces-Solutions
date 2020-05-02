#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,m,max=0,min=0,sum=0;
	cin>>n>>m;
	int arr[m];
	int new_arr[m];
	for(int i=0 ; i<m ; i++)
	{
		cin>>arr[i];
		new_arr[i]=arr[i];
	}

	for(int i=0 ; i<m ; i++)
		sum+=arr[i];
	if(sum==n)
	{
		for(int i=0 ; i<m ; i++)
		{
			max=max+arr[i]*(arr[i]+1)/2;
			min = max;
		}
		cout<<max<<" "<<max<<"\n";
	}
	else
	{
		sum=0;
		sort(arr, arr+m, greater<int>());
		while(sum<n)
		{
				max=max+arr[0];
				arr[0]--;
				sum++;
				sort(arr, arr+m, greater<int>());
				
				
		}
		sum=0;
		sort(new_arr, new_arr+m); 
			int i=0;
			while(sum<n)
			{
				
					min=min+new_arr[i];
					new_arr[i]--;
					if(new_arr[i]==0)
						i++;
					sum++;
					sort(new_arr, new_arr+m);
			}
		
		cout<<max<<" "<<min<<"\n";
	}
	return 0;
}