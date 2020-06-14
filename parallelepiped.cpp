#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	float lb,bh,hl;
	float value1,value2,value3;
	float length,breadth,height;
	cin>>lb>>bh>>hl;
	value1=0;
	value2=0;
	value3=hl;
	value1=lb;
	value2=bh;
	float ans,rem;
	ans=value1/value2;
	rem=ans*value3;
	float final;
	final=sqrt(rem);
	float lengthl,lengthb,lengthh;
	lengthl=final;
	lengthb=lb/final;
	lengthh=hl/final;

	float final_answer;
	final_answer=4*(lengthh+lengthb+lengthl);
	cout<<final_answer<<"\n";
	

	return 0;
}