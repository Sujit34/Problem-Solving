#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,p=0,a,b;
    char s[100];
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        scanf("%c",&s[i]);
    }
    for(i=0;i<n-1;i++)
    {
        a=s[i]-'0';
        b=s[i+1]-'0';
        if(a-b==0)
        {
            p++;
        }
    }

        printf("%d",p);




}
