

    #include<iostream>
    #include<cctype>
    #include<cstring>
     
    using namespace std;
     
    int main()
    {
    	string s;
    	getline(cin, s);
    	int length = s.length();
    	for(int i=0 ; i<length ; i++)
    	{
    		if(s[i]=='-' && s[i+1]=='.')
    		{
    			cout<<"1";
    			s[i]=0;
    			s[i+1]=0;
    		}
    		else if(s[i]=='.')
    		{
    			cout<<"0";
    			s[i]=0;
    		}
    		else if(s[i]=='-'&&s[i+1]=='-')
    		{
    			cout<<"2";
    			s[i]=0;
    			s[i+1]=0;
    		}
    	}
    	cout<<endl;
    	return 0;
    }