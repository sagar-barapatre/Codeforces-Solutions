    #include<iostream>
    #include<string>
    #include<cctype>
     
    using namespace std;
     
    int main()
    {
    	string s;
    	getline(cin, s);
    	int c=s[0];
    	int length = s.length();
    	for(int i=0 ; i<length ; i++)
    	{
    	if(islower(c))
    	{
    		s[0]=toupper(c);
    	}
    	}
    	
    	for(int i=0 ; i<length ; i++)
    	{
    		cout<<s[i];
    	}
    	cout<<endl;
    	return 0;
    }