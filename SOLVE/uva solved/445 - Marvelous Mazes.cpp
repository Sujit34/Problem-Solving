#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l,sum;
    char s[200];
    while(gets(s)){
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]=='!')
        {
            printf("\n");
        }

        else if(s[i]>='1'&&s[i]<='9')
        {
            sum=s[i]-'0';
            while(s[i+1]>='1'&&s[i+1]<='9')
            {
                sum=sum+s[i+1]-'0';
                i++;
            }
            if(s[i+1]>='A'&&s[i+1]<='Z'||s[i+1]=='*')
            {
                for(j=1;j<=sum;j++)
                printf("%c",s[i+1]);
            }
            else if(s[i+1]=='b')
            {
                for(j=1;j<=sum;j++)
                printf(" ");
            }
        }

    }
    printf("\n");
}
return 0;
}
