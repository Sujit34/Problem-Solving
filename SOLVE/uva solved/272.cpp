#include<stdio.h>
#include<string.h>
int main()
{
    int n=0,l,i;
    char s[100000];
    while(gets(s)){
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]=='"')
        {
            n=n+1;
            if(n%2==1)
            {
                printf("``");
            }
            else{printf("''");}

        }
        else
        printf("%c",s[i]);
    }
    printf("\n");}
    return 0;
}
