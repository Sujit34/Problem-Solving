#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,l;
    char s[1001];
    scanf("%d",&n);
    getchar();
    for(i=1;i<=n;i++)
    {
        gets(s);
        l=strlen(s);
        if(l<11)
        {
            printf("%s\n",s);
        }
        else
        {
            printf("%c%d%c\n",s[0],l-2,s[l-1]);
        }
    }
}
