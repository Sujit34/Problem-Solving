#include<stdio.h>
int main()
{
    int n,g,l,i;
    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d%d",&g,&l);
            if(l%g==0)
            {
                printf("%d %d\n",g,l);
            }
            else
            printf("-1\n");
        }
    }
    return 0;
}

