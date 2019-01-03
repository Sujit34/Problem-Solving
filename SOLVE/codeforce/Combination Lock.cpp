#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,sum=0,p=0,q=0,a,b,c,d;
    char s1[1001],s2[1001];
    scanf("%d",&n);
    getchar();
    scanf("%s %s",&s1,&s2);
    for(i=0;i<n;i++)
    {

        p=0;q=0;
        a=s1[i]-'0';
        b=s2[i]-'0';
        c=a;
        d=b;
        while(a!=b)
        {
            a--;

            if(a<0)
            {
                a=9;
                //p--;
            }
            p++;
        }
        while(c!=d)
        {
            c++;

            if(c>9)
            {
                c=0;
                //q--;
            }
            q++;
        }

        if(p<q)
        {
            sum=sum+p;
        }
        else
        {
            sum=sum+q;
        }
    }
    printf("%d",sum);

}
