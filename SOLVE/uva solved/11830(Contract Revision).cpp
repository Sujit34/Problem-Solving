#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i,j,l,n;
    long double x;
    char s[100],p,s1[100];
    while(scanf("%d",&n)==1){
    getchar();
    gets(s);
    p=n+'0';
    if(p=='0'&&s[0]=='0')
    {
        return 0;
    }
    l=strlen(s);
    for(i=0,j=0;i<l;i++)
    {
        if(s[i]!=p)
        {
            s1[j]=s[i];
            j++;
        }
    }
    s1[j]='\0';
    x=atof(s1);
    if(x==0)
    {
        printf("0\n");
    }
    else if(j==0)
    {
        printf("0\n");
    }
    else
    {
        printf("%s\n",s1);
    }

    }
    return 0;
}
