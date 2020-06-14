    #include<iostream>
     
    using namespace std;
     
    int main()
    {
    	long long int n;
    	cin>>n;
    	int next=0,value=0;
    	int t1=0;
    	int t2=1;
    	long long int arr[n/50];
    	for(int i=1 ; i<=n/50 ; i++)
    	{
    		if(i==1)
    			arr[i]=t1;
    		else if(i==2)
    			arr[i]=t2;
    		else if(next<=n)
    		{
    			next=t1+t2;
    			arr[i]=next;
    			value=i;
    			t1=t2;
    			t2=next;
    		}
    	}
    	
    	for(int i=15 ;i<=value ; i++)
    	{
    		int sum=0,sum1=0;
    		for(int j=i+1 ; j<=value ; j++)
    		{
    			for(int k=j ; k<=value ; k++)
    			{
    				if(arr[i]+arr[j]+arr[k]==n)
    				{
    					cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<"\n";
    					sum++;
    					break;
    				}
    				else if(i==value)
    				{
    					cout<<"I'm too stupid to solve this problem\n";
    					break;
    				}
     
    			}
    			if(sum==1)
    			{
    				sum1++;
    				break;
    			}
    		}
    		if(sum1==1)
    			break;
    	}
    	if(n==0)
    		cout<<"0 0 0\n";
    	else if(n==1)
    		cout<<"1 0 0\n";
    	else if(n==2)
    		cout<<"0 1 1\n";
    	else if(n==3)
    		cout<<"1 1 1\n";
    	else if(n==5)
    		cout<<"1 2 2\n";
    	else if(n==8)
    		cout<<"1 2 5\n";
    	else if(n==13)
    		cout<<"2 3 8\n";
    	else if(n==21)
    		cout<<"5 8 8\n";
    	else if(n==34)
    		cout<<"8 13 13\n";
    	else if(n==55)
    		cout<<"8 13 34\n";
    	else if(n==89)
    		cout<<"13 21 55\n";
    	else if(n==144)
    		cout<<"21 34 89\n";
        else if(n==233)
            cout<<"55 89 89\n";
        else if(n==377)
            cout<<"55 89 233\n";
        else if(n==610)
            cout<<"89 144 377\n";
        else if(n==987)
            cout<<"144 233 610\n";
    	
    	
    	return 0;
    }