#include<stdio.h>
#include<string.h>
int main()
{
    int t,n,l,i,j,len,v[105],k;
    double p;
    char s[10001],x[105];
    scanf("%d",&t);
    for(int z=1;z<=t;z++)
    {
        p=0;
        scanf("%d",&n);
        getchar();
        for(i=0;i<n;i++)
        {
            scanf("%c %d",&x[i],&v[i]);
            getchar();
        }
        scanf("%d",&l);
        getchar();
        for(i=0;i<l;i++)
        {
            gets(s);
            len=strlen(s);
            for(j=0;j<len;j++)
            {
                for(k=0;k<n;k++)
                {
                    if(s[j]==x[k])
                    {
                        p=p+v[k];
                    }
                }
            }
        }
        printf("%.2lf$\n",p/100);

    }
}
