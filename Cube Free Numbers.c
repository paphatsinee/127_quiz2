#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,k;
    int a[100];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            for(int b=0;b<=n;b++)
            {
                if(j=pow(i,3))
                {
                    a[b]=j;
                }
            }

        }

    }
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
