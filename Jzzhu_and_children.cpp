#include<iostream>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int arr[n];
	for(int i=0; i<n ; i++)
	{
		cin>>arr[i];
	}
	int rem,value,sum=0;
	for(int j=0 ; j<n ; j++)
	{
		
			for(int i=0 ; i<n ; i++)
				{
					if(j==1 && sum==0)
					{
						for(int k=0 ; k<n ; k++)
						{
							sum=sum+arr[k];	
						}
						if(sum==0)
							value=n-1;
						else
						{
							if(m-arr[i]>=0)
								{
									arr[i]=0;
								}
							if(m-arr[i]<0)
								{
									rem=arr[i]-m;
									arr[i]=rem;
									value=i;
								}
						}
					}
					else if(m-arr[i]>=0)
						{
							arr[i]=0;
						}
					else if(m-arr[i]<0)
						{
							rem=arr[i]-m;
							arr[i]=rem;
							value=i;
						}
				}	
	}
	cout<<value+1<<"\n";
	return 0;
}