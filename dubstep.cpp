#include<iostream>

using namespace std;

int main()
{
	string s;
	getline(cin, s);
	int length=s.length();
	int sum=0;
	for(int i=0 ; i<length; i++)
	{
		for(int j=i+1 ; j<length ; j++)
		{
			for(int k=j+1 ; k<length ; k++)
			{
				if(s[i]=='W')
				{
					if(s[j]=='U')
					{
						if(s[k]=='B')
						{
							s[i]='0';
							s[j]='0';
							s[k]='0';
							sum++;
							break;
						}
					}
					
				}
			}
			if(sum==1)
				break;
		}
	}
	int k=0;
	char new_arr[length];
	for(int i=0 ; i<length ; i++)
	{
		if(s[i]!='0')
		{
			new_arr[k]=s[i];
			k++;
			if(s[i+1]=='0')
			{
				new_arr[k]=' ';
				k++;
			}
		}
	}
	for(int i=0 ; i<k ; i++)
	{
		cout<<new_arr[i];
	}
	cout<<endl;
	return 0;
}