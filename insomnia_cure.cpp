    #include<iostream>
     
    using namespace std;
     
    int main()
    {
    	int k,l,m,n,d;
    	int arr[1000000]={0};
    	int sum=0;
    	cin>>k>>l>>m>>n>>d;
    	for(int i=1; i<=d ; i++)
    	{
    		if(i%k==0)
    			arr[i]=i;
    	}
    	for(int i =1 ; i<=d ; i++)
    	{
    		if(i%l==0)
    			arr[i]=i;
    	}
    	for(int i=1 ; i<=d ; i++)
    	{
    		if(i%m==0)
    			arr[i]=i;
    	}
    	for(int i=1 ; i<=d ; i++)
    	{
    		if(i%n==0)
    			arr[i]=i;
    	}
    	for(int i=1 ; i<=d ; i++)
    	{
    		if(arr[i]==0)
    			sum++;
    	}
    	cout<<d-sum<<endl;
    	return 0;
    }