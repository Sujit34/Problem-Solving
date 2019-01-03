#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l,l1,r=0,p,k;
    char s[100],s1[100],sum[100];
    gets(s);
    gets(s1);
    l=strlen(s);
    l1=strlen(s1);
    if(l>=l1)
    {
        k=0;
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
        for(i=k-1;i>=0;i--)
        {
            printf("%c",sum[i]);
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
        for(i=k-1;i>=0;i--)
        {
            printf("%c",sum[i]);
        }

    }

}

