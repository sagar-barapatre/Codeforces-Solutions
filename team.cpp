#include<iostream>

using namespace std;

int main()
{
	int n,sum=0;
	cin>>n;
	int value;
	int petya[100000];
	int tonya[100000];
	int vasya[100000];
	for(int i=0 ; i<n ; i++)
	{
		cin>>petya[i];
		cin>>tonya[i];
		cin>>vasya[i];
	}
	for(int i=0 ; i<n ; i++)
	{
		value=petya[i]+tonya[i]+vasya[i];
		if(value>=2)
			sum++;
		else
			continue;
	}
	cout<<sum<<"\n";
	return 0;
}