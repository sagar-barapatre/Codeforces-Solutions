    #include<iostream>
    #include<cmath>
     
    using namespace std;
     
    int main()
    {
    	int arr[128][128];
    	int x,y;
    	for(int i=0 ; i<5 ; i++)
    	{
    		for(int j=0 ; j<5 ; j++)
    		{
    			cin>>arr[i][j];
    		}
    	}
    	for(int i=0 ; i<5 ; i++)
    	{
    		for(int j=0 ; j<5 ; j++)
    		{
    			if(arr[i][j]!=0)
    			{
    				x=i;
    				y=j;
    			}
    		}
    	}
    	int value1,value2;
    	value1 = abs(x-2);
    	value2 = abs(y-2);
    	cout<<value1+value2<<endl;
    	return 0;
    }