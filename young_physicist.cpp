

    #include<iostream>
     
    using namespace std;
     
    int main()
    {
    	int n;
    	cin>>n;
    	int arr[128][128];
    	for (int i=0 ; i<n ; i++)
    	{
    		for(int j=0 ; j<3; j++)
    		{
    			cin>>arr[i][j];
    		}
    	}
    	int sum1=0;
    	int sum2=0; 
    	int sum3=0;
    	for(int i=0; i<n; i++)
    	{
    		sum1 = sum1 + arr[i][0];
    		sum2 = sum2 + arr[i][1];
    		sum3 = sum3 + arr[i][2];
    	}
    	if(sum1==0 && sum2==0 && sum3==0)
    	{
    		cout<<"YES\n";
    	}
    	else
    	{
    		cout<<"NO\n";
    	}
    	return 0;
    }