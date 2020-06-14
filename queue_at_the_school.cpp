        #include<iostream>
         
        using namespace std;
         
        int main()
        {
        	int number,time;
        	int temp;
        	cin>>number>>time;
        	char student1[128];
        	char student2[128];
        	for(int i=0; i<number ; i++)
        	{
        		cin>>student1[i];
        	}
        	for(int i=0 ; i<time ; i++)
        	{
        		for(int i=0 ; i<number ; i++)
        			{
        				if(student1[i]=='B' && student1[i+1]=='G')
        				{
        					
        					temp=student1[i];
        					student1[i]=student1[i+1];
        					student1[i+1]=temp;
        					student2[i]=student1[i];
        					student2[i+1]=student1[i+1];
        					student1[i]=student1[i+1]=0;
        					
        				}
        				else if(student1[i]==0)
        				{
        					continue;
        				}
        				else if(student1[i]!='B' && student1[i+1]!='G')
        				{
        					student2[i]=student1[i];
        					student1[i]=0;
        				}
                        else if(student1[i]==student1[number-1] && student1[i]=='B')
                        {
                            student2[i]=student1[i];
                            student1[i]=0;
                        }
                        else
                        {
                            student2[i]=student1[i];
                            student1[i]=0;                      
                        }
        			}
        			for(int i=0 ; i<number ; i++)
        			{
        				student1[i]=student2[i];
        			}
        	}
        	for(int i=0 ; i<number ; i++)
        	{
        		cout<<student2[i];
        	}
        	cout<<endl;
        	return 0;
        }