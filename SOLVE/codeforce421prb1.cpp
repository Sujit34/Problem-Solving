#include<stdio.h>
#include<string.h>
int main()
{
    int n,a,b,c[100],d[100],i,j,p,count,k=0,f[100];
    scanf("%d %d %d",&n,&a,&b);
    for(i=0;i<a;i++)
    {
        scanf("%d",&c[i]);
    }
    for(j=0;j<b;j++)
    {
        scanf("%d",&d[j]);
    }
    memset(f,0,sizeof(f));
    for(i=0;i<a;i++)
    {
        f[c[i]]=1;
    }
     for(j=0;j<b;j++)
    {count=0;
        for(i=0;i<a;i++)
        {

            if(d[j]==c[i])
            {
                count++;
                k++;
            }
        }
        if(count==0)
        {
            f[d[j]]=2;
        }
    }
    for(j=1;j<=n;j++)
    {
        if(f[j]==0)
        {
            printf("1");
            if(j!=n)
            printf(" ");
        }
        else
        {
            printf("%d",f[j]);
            if(j!=n)
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}



