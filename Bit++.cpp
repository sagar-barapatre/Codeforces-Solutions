#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

int main()
{
	int n,sum=0,sum1=0;
	cin>>n;
	string operations[100000];
	
	for(int i=0 ; i<n ; i++)
	{
		cin>>operations[i];
	}
	for(int i=0 ; i<n ; i++)
	{
		if(operations[i]=="X++" || operations[i]=="++X")
			sum++;
		else if(operations[i]=="--X" || operations[i]=="X--")
			sum1++;
	}
	cout<<sum-sum1<<"\n";
	return 0;
}