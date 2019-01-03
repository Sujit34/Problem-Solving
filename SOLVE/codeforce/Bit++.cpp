#include<stdio.h>
#include<string.h>
int main()
{
    int p=0,n;
    char s[10];
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        gets(s);
        if(strcmp("++X",s)==0)
        {
            p++;
        }
        if(strcmp("X++",s)==0)
        {
            p++;
        }
        if(strcmp("--X",s)==0)
        {
            p--;
        }
        if(strcmp("X--",s)==0)
        {
            p--;
        }

    }
        printf("%d",p);


}
