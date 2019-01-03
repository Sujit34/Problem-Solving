#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    long long int i,j,l,sum,n;
    char s[1000];
    while(scanf("%s",&s)==1)
    {
        sum=0;
        if((s[0]-'0')==0)
        {
            return 0;
        }
        l=strlen(s);
        for(i=l-1,j=1;i>=0;i--)
        {
            n=s[i]-'0';
            sum=sum+(n*(pow(2,j)-1));
            j++;
        }
        printf("%lld\n",sum);


    }
    return 0;
}
