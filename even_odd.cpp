#include<iostream>

using namespace std;

int main()
{
	int n,value;
	cin>>n>>value;
	int div;
	div=(n+1)/2;
	if(div>=value)
		cout<<(2*value)-1<<"\n";
	else
	{
		cout<<2*(value-div)<<"\n";
	}
	return 0;
}