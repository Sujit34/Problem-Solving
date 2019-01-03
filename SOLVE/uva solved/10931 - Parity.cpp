#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,count,l;
    char s[1000],s1[1000];
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        return 0;
        j=0;
        count=0;
        while(n!=0)
        {
            s[j++]=n%2+'0';
            n=n/2;
        }
        s[j++]='\0';
        l=strlen(s);
        for(i=l-1,j=0;i>=0;i--)
        {
            s1[j++]=s[i];
        }
        s1[j++]='\0';
        for(i=0;i<l;i++)
        {
            if(s1[i]=='1')
            {
                count++;
            }
        }
        printf("The parity of %s is %d (mod 2).\n",s1,count);

    }
    return 0;
}
