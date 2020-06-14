#include<iostream>

using namespace std;

int main()
{
	int tcs;
	cin>>tcs;
	while(tcs--)
	{
		string s;
        cin>>s;
        int cnt1=0;
        int cnt2=0;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i] == '0')
            {
                cnt1++;
            }
            else
            break;
        }
        for(int i=n-1;i>=0;i--)
        {
            if(s[i] == '0')
            {
                cnt2++;
            }
            else
            break;
        }
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            cnt++;
        }
        if(cnt==0)
        {
            cout<<0<<"\n";
        }
        else
        cout<< n - cnt1 -cnt2-cnt<<"\n";
	}
	return 0;
}