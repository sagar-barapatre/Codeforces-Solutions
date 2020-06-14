    #include<iostream>
     
    using namespace std;
     
    int main()
    {
    	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    	int n,m;
    	cin>>n>>m;
    	int value;
    	int arr[15]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    	for(int i=0 ; i<15 ; i++)
    	{
    		if(n==arr[i])
    			value=i;
    	}
    	if(m==arr[value+1])
    		cout<<"YES\n";
    	else
    		cout<<"NO\n";
    	return 0;
    }