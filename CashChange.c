#include<stdio.h>
int main()
{
    int x;
    int arr[]= {500,100,50,10,5,1};
    int n=sizeof(arr)/sizeof(arr[0]),i=0,j=0,coin[1000];

    scanf("%d", &x);


    int notecount=0;
    for(int i=0; i<=n; i++)

        while(i<n)
        {
            if(arr[i]<=x)
            {

                coin[j]=arr[i];
                j++;
                x=x-arr[i];
            }
            else if(x==0)
                break;
            else
                i++;

        }

    for(int i=j-1; i>=0; i--)
    {
        if(i==0)
            printf("%d ", coin[i]);
        else
            printf("%d ", coin[i]);
    }
}




