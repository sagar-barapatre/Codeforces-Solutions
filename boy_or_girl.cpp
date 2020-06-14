#include<iostream>
#include<cctype>
#include<cstring>

using namespace std;

int main()
{
	string s;
	int sum=0;
	int rem;
	getline(cin, s);
	int length = s.length();
	for(int i=0 ; i<length ; i++)
	{
		for(int j=i+1 ; j<length ; j++)
		{
			if(s[i]==s[j])
				sum++;
		}
	}
	rem=length-sum;
	if(rem%2!=0)
		cout<<"IGNORE HIM!\n";
	else
		cout<<"CHAT WITH HER!\n";
	return 0;
}