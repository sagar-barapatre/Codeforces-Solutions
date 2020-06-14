    #include<iostream>
    #include<cctype>
    #include<cstring>
    #include<cmath>
     
    using namespace std;
     
    int main()
    {
    	string num1;
    	string num2;
    	getline(cin, num1);
    	getline(cin, num2);
    	int length1 = num1.length();
    	int length2 = num2.length();
    	for(int i=0 ; i<length1 ; i++)
    	{
    		if(abs(num1[i]-num2[i])==1)
    			cout<<"1";
    		else
    			cout<<"0";
    	}
    	cout<<endl;
    	return 0;
    }