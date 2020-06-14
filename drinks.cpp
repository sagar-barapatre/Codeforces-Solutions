    #include<iostream>
     
    using namespace std;
     
    int main()
    {
    	double n,sum=0;
    	double value;
    	cin>>n;
    	int arr[128];
    	for(int i=0 ; i< n ; i++)
    	{
    		cin>>arr[i];
    	}
    	for(int i=0 ; i<n ; i++)
    	{
    		sum = sum+arr[i];
    	}
    	value = sum/n;
    	cout<<value<<endl;
    	return 0;
    }