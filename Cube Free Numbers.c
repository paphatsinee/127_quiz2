#include<stdio.h>
int main()
{
    int i,n,k,a[]={1,2,3,4,5,6,7,9,10,11,12,13,14,15,17,18};
    scanf("%d",&n);
    if(1<=n<=1000000)
    {
        if(n==8||n==16||n==24||n==27||n==32)
        {
            printf("Not Cube Free");
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                k++;
                if(i==8||i==16||i==24||i==27||i==32)
                {
                    k--;
                }
            }
            printf("%d",k);
        }

    }
    return 0;
}
