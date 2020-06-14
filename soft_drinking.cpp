#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,k,l,c,d,p,nl,np;
	int toast[3];
	int total_drink,total_lime;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	total_drink=k*l;
	toast[0]=total_drink/nl;
	total_lime=c*d;
	toast[1]=total_lime;
	toast[2]=p/np;
	int min=toast[0];
	for(int i=1 ; i<=2 ; i++)
	{
		if(toast[i]<min)
			min=toast[i];
	}
	cout<<min/n<<"\n";
	return 0;
}