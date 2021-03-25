#include<stdio.h>
int main()
{
    int M,i,j,N,P[10],Q[10],R[10],t,q,r;
    scanf("%d",&M);
    scanf("%d",&N);
    char a[M][70];
    for(i=1;i<=N;i++)
    {
        scanf("%d %d %d",&P[i],&Q[i],&R[i]);
    }
    for(i=1;i<=N;i++)
    {
        P[j]=P[i+1];
        Q[j]=Q[i+1];
        R[j]=R[i+1];
        if(P[i]>P[j])
        {
            t=P[i];
            P[i]=P[j];
            P[j]=t;

            q=Q[i];
            Q[i]=Q[j];
            Q[j]=q;

            r=R[i];
            R[i]=R[j];
            R[j]=r;
        }
    }
    for(i=1;i<=M;i++)
    {
        for(j=1;j<=70;j++)
        {
            if(P[i]==i && Q[j]==j)
            {
                for(int z=0;z<R[i];z++)
                {
                    printf("x");
                    j+=R[i];
                }
            }
            else
            {
                for(int h=0;h<j;h++)
                    printf("o");
            }

        }
        printf("\n");
    }


return 0;
}
