#include<stdio.h>
#include<string.h>
#include<cctype>
int main()
{
    char s[101];
    int l,p=0,i,k=0;

    gets(s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]<'a')
        {
            p++;
        }
    }
    if(p==l&&l!=1)
    {

        for(i=0;i<l;i++)
        printf("%c",tolower(s[i]));
        k=1;
    }
    p=0;
    for(i=1;i<l;i++)
    {
        if(s[i]<'a')
        {
            p++;
        }
    }
    if(p==l-1&&s[0]>='a'&&l!=1)
    {

        printf("%c",toupper(s[0]));
        for(i=1;i<l;i++)
        printf("%c",tolower(s[i]));
        k=1;
    }

if(l==1)
{
    if(s[0]<'a')
    {
        printf("%c",tolower(s[0]));
        k=1;
    }
    else
    {
        printf("%c",toupper(s[0]));
        k=1;
    }
}
if(k==0)
{
    for(i=0;i<l;i++)
    {
        printf("%c",s[i]);
    }
}

}
