
#include <bits/stdc++.h>


using namespace std;

int main()
 {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long int n;
    cin>>n;
    string s=to_string(n);
    long long int l=s.size();
    int a=0;
    if(s[0]=='1')
    {
        for(int i=0;i<l;i++)
        {
            if(s[i]=='1'||s[i]=='4')
            {
                if(s[i]=='4'&&s[i+1]=='4'&& s[i+2]=='4')
                {
                    a=-1;
                    i=l;
                }
                else
                    a=1;
            }
            if(s[i]!='1'&&s[i]!='4')
            {
                a=-1;
                i=l;
            }
        }
    }
    if(a==1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}