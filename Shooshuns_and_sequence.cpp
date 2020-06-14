#include<iostream>
#include <cmath>

using namespace std;

int main()
{
	int n,k;
	scanf("%d%d",&n, &k);
	int sum=0,sum1=0,sum2=0;
	int arr[n];
	for(int i=0 ; i<n ; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n-1 ; i++)
	{
		if(arr[i]==arr[i+1])
			sum2++;
	}
	if(sum2==n-1)
		printf("0\n");
	else
	{
		for(int i=0 ; i<n;i++)
		{
			sum=0;
			arr[n+i]=arr[k-1];
			arr[i]=0;
			sum1++;
			for(int j=i+1 ; j<n+i ; j++)
			{
				if(arr[j]==arr[j+1])
					sum++;
			}
			if(sum==n-1)
			{
				printf("%d\n",sum1);
				break;
			}
			else if(sum==0)
			{
				printf("-1\n");
				break;
			}
		}
		
	}
	return 0;
}