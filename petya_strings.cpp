        #include<iostream>
        using namespace std;
        int main()
        {
            int i,check=0;
            string str1;string str2;
            cin>>str1>>str2;
            for(i=0; i<str2.length(); i++)
            {
                str1[i]=char(tolower(str1[i]));
                str2[i]=char(tolower(str2[i]));
                if(str1[i]==str2[i] || str1[i]==str2[i]+32 || str1[i]==str2[i]-32)
                {
                    continue;
                }
                if(str1[i]>str2[i])
                {
                   check=1;
                   break;
                }
                else
                {
                   check=2;
                   break;
                }
            }
            if(check==1)
            {
                cout<<1;
            }
            else if(check==2)
            {
                cout<<-1;
            }
            else if(check==0)
                cout<<0;
            return 0;
        }