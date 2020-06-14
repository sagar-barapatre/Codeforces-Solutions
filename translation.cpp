#include<iostream>

using namespace std;

int main()
{
	string s1;
	string s2;
	getline(cin, s1);
	getline(cin, s2);
	int length1=s1.length();
	int length2=s2.length();
	int arr1[length1];
	int arr2[length2];
	for (int i = 0; i < length1; ++i)
	{
		arr1[i]=s1[i];
	}
	for(int i=0 ; i<length1/2 ; i++)
	{
		int temp;
		temp=arr1[i];
		arr1[i]=arr1[length1-i-1];
		arr1[length1-i-1]=temp;
	}
	int sum=0;
	int sum1=0;
	for(int i=0 ; i<length1 ; i++)
	{
		if(arr1[i]==s2[i])
			sum++;
		else
			sum1++;
	}
	if(sum==length1)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}