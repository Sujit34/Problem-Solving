#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l,l1,p,k,u,r;
    char s[1001],s1[1001]={'0'},sum[1001];
    for(i=1;i<=100;i++)
    {
        r=0;k=0;
        gets(s);
        if(s[0]=='0')
        {
            break;
        }
        l=strlen(s);
        l1=strlen(s1);
         if(l>=l1)
    {
        j=l1-1;
        for(i=l-1;i>=0;i--)
        {
            if(i>=0&&j>=0)
            {
                p=r+(s[i]-'0')+(s1[j]-'0');
                j--;
            }
            else
            {
                p=r+(s[i]-'0');
            }
            if(p>9)
            {
                sum[k]=p%10+'0';
                r=p/10;
                k++;
            }
            else
            {
                sum[k]=p+'0';
                r=0;
                k++;
            }
        }
        if(r!=0)
        {
            sum[k]=r+'0';
            k++;
        }
        for(i=k-1,u=0;i>=0;i--)
        {
            s1[u]=sum[i];
            u++;
        }
    }
    else
    {
        j=l-1;
        k=0;
        r=0;
        for(i=l1-1;i>=0;i--)
        {
            if(i>=0&&j>=0)
            {
                p=r+(s[j]-'0')+(s1[i]-'0');
                j--;
            }
            else
            {
                p=r+(s1[i]-'0');
            }
            if(p>9)
            {
                sum[k]=p%10+'0';
                r=p/10;
                k++;
            }
            else
            {
                sum[k]=p+'0';
                r=0;
                k++;
            }
        }
        if(r!=0)
        {
            sum[k]=r+'0';
            k++;
        }
        for(i=k-1,u=0;i>=0;i--)
        {
            s1[u]=sum[i];
            u++;
        }

    }

    }

for(i=0;i<u;i++)
{
    printf("%c",s1[i]);
}
printf("\n");
return 0;
    }


