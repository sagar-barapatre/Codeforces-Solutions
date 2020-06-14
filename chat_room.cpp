#include<iostream>

using namespace std;

int main()
{
	string s;
	cin>>s;
	int sum=0;
	for(int i=0 ; i<s.length() ; i++)
	{
		if(s[i]=='h')
		{
			for(int j=i+1 ; j<s.length() ; j++)
			{
				if(s[j]=='e')
				{
					for(int k=j+1 ; k<s.length() ; k++)
					{
						if(s[k]=='l')
						{
							for(int q=k+1 ; q<s.length() ; q++)
							{
								if(s[q]=='l')
								{
									for(int z=q+1 ; z<s.length() ; z++)
									{
										if(s[z]=='o')
										{
											sum++;
											break;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if(sum==0)
		cout<<"NO\n";
	else if(sum!=0)
		cout<<"YES\n";
	return 0;
}