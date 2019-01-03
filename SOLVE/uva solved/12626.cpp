#include<stdio.h>
#include<string.h>
int main()
{
    int l,j,m,a,r,g,i,t,p,a1,b,c,d,e,f,n,t1;
    char s[700];
    scanf("%d",&n);
    getchar();
    for(t1=1;t1<=n;t1++){m=0;a=0;r=0;g=0;i=0;t=0;
    gets(s);
    l=strlen(s);
    for(j=0;j<l;j++)
    {
        if(s[j]=='M')
        {
            m++;
        }
        else if(s[j]=='A')
        {
            a++;
        }
        else if(s[j]=='R')
        {
            r++;
        }
        else if(s[j]=='G')
        {
            g++;
        }
        else if(s[j]=='I')
        {
            i++;
        }
        else if(s[j]=='T')
        {
            t++;
        }

    }
    for(p=1;p<600;)
    {
        a1=1*p;
        b=3*p;
        c=2*p;
        d=1*p;
        e=1*p;
        f=1*p;
        if(a1<=m&&b<=a&&c<=r&&d<=g&&e<=i&&f<=t)
        {
            p++;
        }
        else
        {
            printf("%d\n",p-1);
            break;
        }
    }
    }
    return 0;
}
