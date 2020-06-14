            #include <iostream>
            
            using namespace std;
             
            int main(void)
            {
                ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
                int size = 0, time = 0, temp;
                cin>>size;
             
                int line[size];
             
                for(int i = 0; i < size; i++)
                   cin>>line[i];
             
                int min = line[0], max = line[0], loc_min = 0, loc_max = 0;
             
                for (int i = 1; i < size; i++)
                {
                    if(line[i] >= max)
                    {
                        max = line[i];
                        loc_max = i;
                    }
                    if(line[i] <= min)
                    {
                        min = line[i];
                        loc_min = i;
                    }
                }
             
                if(loc_min == size - 1 && line[loc_max] == line[0])
                {
                   cout<<time<<endl;
                }
                else
                {
                    for(int i = loc_min; i < size - 1; i++)
                    {
                        temp = line[i];
                        line[i] = line[i + 1];
                        line[i + 1] = temp;
                        time++;
                    }
             
                    for (int i = 0; i < size; i++)
                    {
                        if(line[i] >= max)
                        {
                            loc_max = i;
                            break;
                        }
                    }
             
                    for(int i = loc_max; i > 0; i--)
                    {
                        temp = line[i];
                        line[i] = line[i - 1];
                        line[i - 1] = temp;
                        time++;
                    }
             
                    cout<<time<<endl;
                }
             
                return 0;
            }