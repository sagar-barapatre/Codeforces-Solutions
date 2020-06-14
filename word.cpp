    #include<iostream>
    #include<string>
    #include<cctype>
     
    using namespace std;
     
    int main()
    {
    	string s;
    	int lower=0;
    	int upper=0;
    	getline(cin, s);
    	int length = s.length();
    	for(int i=0 ; i<length ; i++)
    	{
    		int c = s[i];
    		if(islower(c))
    			lower++;
    		else if(isupper(c))
    			upper++;
    	}
    	if(upper>lower)
    	{
    		for(int i=0 ; i<length ; i++)
    		{
    			int c = s[i];
    			s[i]=toupper(c);
    			cout<<s[i];
    		}
    	}
    	else
    	{
    		for(int i=0 ; i<length ; i++)
    		{
    			int c = s[i];
    			s[i]=tolower(c);
    			cout<<s[i];
    		}
    	}
    	cout<<endl;
    	return 0;
    }