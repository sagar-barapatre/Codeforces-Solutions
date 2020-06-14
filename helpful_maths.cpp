#include<iostream>
#include<cctype>
#include<cstring>

using namespace std;

int main()
{
	string s;
	getline(cin, s);
	int length = s.length();
	for(int i=0 ; i<length ;i=i+2)
	{
		int min=i;
		for(int j=i+2 ; j<length ; j=j+2)
		{
			if(s[j]<s[min])
				min=j;
		}
		if(min!=i)
			{
				int temp;
				temp=s[i];
				s[i]=s[min];
				s[min]=temp;
			}
		
	}
	for(int i=0 ; i<length ; i++)
	{
		cout<<s[i];
	}

		cout<<"\n";

	return 0;
}