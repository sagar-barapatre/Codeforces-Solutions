#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	if(n==1)
	{
		cout<<s;
	}
	else
	{
		int length=s.length();
		int k=1;
		char arr[n];
		char new_arr[n];
		for(int i=1 ; i<length ; i++)
		{
			arr[0]=s[0];
			if(s[i]!=s[i+1])
			{
				arr[k]=s[i+1];
				k++;
			}
		}
		for(int i=0 ; i<n ; i++)
		{
			int sum=0;
			for(int j=0 ; j<length ; j++)
			{
				if(arr[i]==s[j])
				{
					sum++;
					new_arr[i]=sum;
				}
			}
		}
		int sum1=0;
		for(int i=0 ; i<n ; i++)
		{
			if(new_arr[i]!=n)
			{
				cout<<"-1";
				break;
			}
			else if(new_arr[i]==n)
				sum1++;
		}
		if(sum1==n)
		{
			for(int i=0 ; i<n ; i++)
			{
				for(int j=0 ; j<n ; j++)
				{
					cout<<arr[j];
				}
			}
		}
	}
	cout<<endl;
	return 0;
}