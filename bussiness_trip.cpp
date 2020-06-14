#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[12],j;
	for(int i=0 ; i<12 ; i++)
	{
		cin>>arr[i];
	}


		for(int i=1 ; i<12; i++)
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
		for(int i=0 ; i<6 ; i++)
		{
			int temp;
			temp=arr[i];
			arr[i]=arr[11-i];
			arr[11-i]=temp;
		}
		int sum=0;
		int sum1=0;
		for(int i=0 ; i<12 ; i++)
		{
			sum=sum+arr[i];
			if(n==0)
			{
				sum1=0;
				break;
			}
			else if(sum-n<0)
			{
				sum1++;
				if(sum1==12)
					sum1=-1;
				
			}
			else if(sum-n>=0)
			{
				sum1++;
				break;
			}
			
		}	
		cout<<sum1<<"\n";
		return 0;
}