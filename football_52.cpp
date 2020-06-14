#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

int main()
{
	string s;
	getline(cin, s);
	int length=s.length();
	int sum=0;

	for (int i = 0; i < length; ++i)
	{
		if(length<7)
			{
				cout<<"NO\n";
				break;
			}
		else if(s[i]==s[i+1])
		{
			if(s[i]==s[i+2])
			{
				if(s[i]==s[i+3])
				{
					if(s[i]==s[i+4])
					{
						if(s[i]==s[i+5])
						{
							if(s[i]==s[i+6])
							{
								cout<<"YES\n";
								break;
							}
						}
					}
				}
			}
			
		}
		else if(i==length-1)
		{
			cout<<"NO\n";
			break;
		}

	}
	
	return 0;
}