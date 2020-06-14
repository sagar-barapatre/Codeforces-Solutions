#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	string s;
	cin>>s;
	int length=s.length();
	int sum=0;
	for(int i=0 ; i<length/2 ; i++)
	{
		if(s[i]!=s[length-i-1])
			sum++;
	}
	if(sum%2==0)
		cout<<"First\n";
	else if(sum%2==1)
		cout<<"Second\n";
	return 0;
}