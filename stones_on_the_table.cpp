

    #include<iostream>
    #include<cstring>
    #include<cctype>
     
    using namespace std;
     
    int main()
    {
    	int n,sum=0;
    	cin>>n;
    	string stone;
    	cin>>stone;
    	
    	for (int i = 0; i < n; i++)
    	{
    		if(stone[i]==stone[i+1] || stone[i]==stone[i-1])
    		{
    			stone[i]=0;
    			sum++;
    		}
    		else if(stone[i]!=stone[i+1] || stone[i]!=stone[i-1])
    			{
    				
    			}
    	}
    	cout<<sum<<endl;
    	return 0;
    }