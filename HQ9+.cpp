#include<iostream>
#include<cctype>
#include<cstring>

using namespace std;

int main()
{
	string s;
	getline(cin, s);
	int length=s.length();
	for(int i=0 ; i<length; i++)
	{
		if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
		{
			cout<<"YES\n";
			break;
		}
		else if(i==length-1)
		{
			cout<<"NO\n";
			break;
		} 
		else
			continue;

	}
	return 0;
}