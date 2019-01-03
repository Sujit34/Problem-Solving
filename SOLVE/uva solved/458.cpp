
#include<stdio.h>
#include<string.h>
int main()
{
    int l,i;
    char r[1000];
    while(scanf("%s",&r)==1)
    {
        l=strlen(r);
        for(i=0;i<l;i++)
        {
            printf("%c",r[i]-7);
        }
        printf("\n");
    }
}

