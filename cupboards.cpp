

    #include<iostream>
     
    using namespace std;
     
    int main()
    {
    	int n,sum1=0,sum2=0;
    	int left[1000000];
    	int right[1000000];
    	int right_open=0;
    	int right_close=0;
    	int left_close=0;
    	int left_open=0;
    	cin>>n;
    	for(int i=0 ; i<n ;i++)
    	{
    		cin>>left[i];
    		cin>>right[i];
    	}
    	for(int  i= 0 ;i<n ; i++)
    	{
    		if(right[i]==1)
    			right_open++;
    		else
    			right_close++;
    	}
    	if(right_open>=right_close)
    	{
    		for(int i=0 ; i<n ; i++)
    		{
    			if(right[i]==0)
    			{
    				right[i]=1;
    				sum1++;
    			}
    		}
    	}
    	else if(right_open<right_close)
    	{
    		for(int i=0 ; i<n ; i++)
    		{
    			if(right[i]==1)
    			{
    				right[i]=0;
    				sum1++;
    			}
     
    		}
    	}
    	for(int i=0 ;i<n ; i++)
    	{
    		if(left[i]==1)
    			left_open++;
    		else
    			left_close++;
    	}
    	if(left_open>=left_close)
    	{
    		for(int i=0 ; i<n ; i++)
    		{
    			if(left[i]==0)
    			{
    				left[i]=1;
    				sum2++;
    			}
    		}
    	}
    	else if(left_open<left_close)
    	{
    		for(int i=0 ; i<n ; i++)
    		{
    			if(left[i]==1)
    			{
    				left[i]=0;
    				sum2++;
    			}
     
    		}
    	}
    	cout<<sum1+sum2<<endl;
    	return 0;
    