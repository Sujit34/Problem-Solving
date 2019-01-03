#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,l,sum,p;
    char s[1000];
    while(scanf("%s",&s)!=EOF){
        sum=0;
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            p=s[i];
            sum=sum+(p-96);
        }
        else
        {
            p=s[i];
            sum=sum+(p-38);
        }
    }


if(sum==1)
{
printf("It is a prime word.\n");
}
else
{
for(i=2;i<=sum;i++)
{if(sum%i==0)
break;
}
if(i==sum)
{
printf("It is a prime word.\n");
}
else
{
printf("It is not a prime word.\n");}
}
    }
    return 0;
}
