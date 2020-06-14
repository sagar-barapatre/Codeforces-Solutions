#include <iostream>

using namespace std;

int main()
{
    long long int cnt=0,i,j;
    long long int arr[4];
    for(i=0;i<4;i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(int i=1 ; i<4; i++)
    {
        int temp;
        temp=arr[i];
        j=i-1;

        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    for(i=0;i<3;i++){
        if(arr[i]==arr[i+1]){
            cnt++;
        }
    }
    printf("%lld\n",cnt);
    return 0;
}