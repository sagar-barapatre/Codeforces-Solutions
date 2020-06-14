#include<iostream>

using namespace std;

int main()
{
	int n;
	int sum1=0;
	int sum2=0;
	scanf("%d",&n);
	int arrn[n];
	for(int i=0 ; i<n ; i++)
	{
		scanf("%d",&arrn[i]);
	}
	int m;
	scanf("%d",&m);
	int arrm[m];
	for(int i=0 ; i<m ; i++)
	{
		scanf("%d",&arrm[i]);
	}
	for(int i=0 ; i<m ; i++)
	{
		for(int j=0 ; j<n ; j++)
			{
				if(arrm[i]==arrn[j])
					{
						
						break;
					}
						sum1++;
			}
	}
	for(int i=0 ; i<m ; i++)
	{
		for(int j=n-1 ; j>=0 ; j--)
			{
				if(arrm[i]==arrn[j])
				{
						
					break;
				}
				sum2++;
			}
	}
	printf("%d %d\n",sum1+m, sum2+m);
	
	return 0;
}