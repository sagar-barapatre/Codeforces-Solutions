#include<iostream>

using namespace std;

int main()
{
	int n;
	
	int value=0;
	cin>>n;
	int x[n];
	int y[n];
	for(int i=0 ; i<n ; i++)
	{
		cin>>x[i];
		cin>>y[i];
	}
	for(int i=0 ; i<n ; i++)
	{
		int sum1=0,sum2=0,sum3=0,sum4=0;
		for(int j=0 ; j<n ; j++)
		{
			if(x[i]==x[j] && y[i]>y[j])
				sum1++;
			else if(x[i]==x[j] && y[i]<y[j])
				sum2++;
			else if(x[i]>x[j] && y[i]==y[j])
				sum3++;
			else if(x[i]<x[j] && y[i]==y[j])
				sum4++;
		}
			if(sum1>=1 && sum2>=1 && sum3>=1 && sum4>=1)
					value++;
	}
	cout<<value<<"\n";
	return 0;
}