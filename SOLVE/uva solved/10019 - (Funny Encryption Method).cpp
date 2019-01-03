#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i,j,l,n,m,count,r,d,sum,count1,p;
    char res[100],s[100],res1[100];
    while(scanf("%d",&p)==1)
    {
        for(j=1;j<=p;j++)
        {
            scanf("%s",&s);
        n=atoi(s);
        m=0;count=0;
        sum=0;
        while(n>0)
        {
            r=n%2;
            n=n/2;
            res[m]=r+'0';
            m++;
        }
        res[m]='\0';
        for(i=0;i<m;i++)
        {
            if(res[i]=='1')
            {
                count++;
            }
        }
        d=16;
        l=strlen(s);
        for(i=0;i<l;i++)
        {
            sum=sum*d+(s[i]-'0');
        }

        m=0;count1=0;
        while(sum>0)
        {
            r=sum%2;
            sum=sum/2;
            res1[m]=r+'0';
            m++;
        }
        res1[m]='\0';
        for(i=0;i<m;i++)
        {
            if(res1[i]=='1')
            {
                count1++;
            }
        }
        printf("%d %d\n",count,count1);


    }

}

    return 0;

}
