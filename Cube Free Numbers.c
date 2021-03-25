#include<stdio.h>
int main()
{
    int i,n,k;
    int a[100];
    scanf("%d",&n);
    if(1<=n<=1000000)
    {
        if(n==8||n==27||n==64||n==125||n==216)
        {
            printf("Not Cube Free");
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                k++;
                if(i==8||i==27||i==64||i==125||i==216)
                {
                    k--;
                }
            }
            printf("%d",k);
        }

    }
    return 0;
}
