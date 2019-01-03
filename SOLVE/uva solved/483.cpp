#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l,b,k;
    char s[1000];
    while(gets(s)){b=-1;
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]==' ')
        {
            for(j=i-1;j>b;j--)
            {
                printf("%c",s[j]);
            }
            printf(" ");
            b=i;
        }
    }
    for(k=l-1;k>b;k--)
    {
        printf("%c",s[k]);
    }
    printf("\n");}
    return 0;
}

