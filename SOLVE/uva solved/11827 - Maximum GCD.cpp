#include<stdio.h>
#include<string.h>
#define max(a,b) (a>b)?a:b
int gcd(int a,int b)
{
    if(b==0)
    return a;
    return gcd(b,a%b);
}
int main()
{
    int n,i,j,l,m,max,k,maximum,num[105];
    char s[100];
    while(scanf("%d",&n)==1)
    {
        getchar();
        while(n--)
        {

            gets(s);
            l=strlen(s);
            m=0;
            for(i=0,j=0;i<l;i++)
            {
                if(s[i]!=' ')
                {
                    m=m*10+(s[i]-'0');
                }
               if(s[i]==' ')
                {
                    num[j++]=m;
                    m=0;
                }
                else if(i==l-1)
                {
                    num[j++]=m;
                }
            }
            maximum=1;
            for(i=0;i<j;i++)
            for(k=i+1;k<j;k++)
            maximum = max(maximum,gcd(num[i],num[k]));
            printf("%d\n",maximum);
        }
    }
    return 0;
}
