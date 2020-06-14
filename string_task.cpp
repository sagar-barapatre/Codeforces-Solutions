#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

int main()
{
	string s;
	getline(cin, s);
	int length=s.length();
	char new_arr[1000]={0};
	int k=0;
	for(int i=0 ; i<length ; i++)
	{
		if(s[i]=='A' || s[i]=='a' || s[i]=='O' || s[i]=='o' || s[i]=='Y' || s[i]=='y' || s[i]=='E' || s[i]=='e' || s[i]=='U' || s[i]=='u' || s[i]=='I' || s[i]=='i')
		{
			continue;
		}
		else 
		{
			if(isupper(s[i]))
			{
				new_arr[k+1]=tolower(s[i]);
			}
			else
			{
				new_arr[k+1]=s[i];
			}
			new_arr[k]='.';
			k=k+2;
		}
	}
	for(int i=0 ; i<k ; i++)
	{
		cout<<new_arr[i];
	}
	cout<<"\n";
	return 0;
}