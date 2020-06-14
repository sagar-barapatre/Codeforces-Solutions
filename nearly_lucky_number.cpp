    #include<iostream>
     
    using namespace std;
     
    int main()
    {
    	long long int num;
    	int sum4=0;
    	int sum7=0;
    	int digit,total;
    	cin>>num;
    	while(num>0)
    	{
    		digit = num%10;
    		if(digit==4)
    			sum4++;
    		else if(digit==7)
    			sum7++;
    		num=num/10;
    	}
    	total = sum4+sum7;
    	if(total==7 || total==4)
    		cout<<"YES\n";
    	else
    		cout<<"NO\n";
    	return 0;
    }