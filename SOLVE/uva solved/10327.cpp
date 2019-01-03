#include<stdio.h>
int main()
{
    int a[1001],i,n,t,d,count;
    while(scanf("%d",&n)==1)
    {count=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=1;i<n;i++)
        {
            for(d=n-1;d>=i;d--)
            {if(a[d-1]>a[d]){
                t=a[d-1];
                a[d-1]=a[d];
                a[d]=t;
                count++;}
            }
        }
        printf("Minimum exchange operations : %d\n",count);

    }
    return 0;
}


