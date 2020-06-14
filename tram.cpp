#include<iostream>

using namespace std;

int main()
{
	int n,rem=0;
	cin>>n;
	int enter[1000000]={0};
	int exit[1000000]={0};
	int remaining[1000000]={0};
	for(int i=0 ; i<n ; i++)
	{
		cin>>exit[i];
		cin>>enter[i];
	}
	for(int i=0 ; i<n ; i++)
	{
		rem = rem + (enter[i]-exit[i]);
		remaining[i]=rem;

	}
	int max=remaining[0];
	for(int i=1 ; i<n ; i++)
	{
		if(remaining[i]>max)
			max=remaining[i];

	}
	cout<<max<<"\n";
	return 0;
}