#include<stdio.h>
#include<string.h>
int main()
{

    char s[20];
    int i,l;
    while(scanf("%s",&s)==1){
    l=strlen(s);
    for(i=0;i<l;i++)
    {if(s[i]=='1')
        {
            printf("1");
        }
        else if(s[i]=='0')
        {
            printf("0");
        }
        else if(s[i]=='-')
        {
            printf("-");
        }
        else if(s[i]=='A'||s[i]=='B'||s[i]=='C')
        {
            printf("2");
        }
        else if(s[i]=='D'||s[i]=='E'||s[i]=='F')
        {
            printf("3");
        }
      else if(s[i]=='G'||s[i]=='H'||s[i]=='I')
        {
            printf("4");
        }
        else if(s[i]=='J'||s[i]=='K'||s[i]=='L')
        {
            printf("5");
        }
        else if(s[i]=='M'||s[i]=='N'||s[i]=='O')
        {
            printf("6");
        }
        else if(s[i]=='P'||s[i]=='Q'||s[i]=='R'||s[i]=='S')
        {
            printf("7");
        }
        else if(s[i]=='T'||s[i]=='U'||s[i]=='V')
        {
            printf("8");
        }
        else if(s[i]=='W'||s[i]=='X'||s[i]=='Y'||'Z')
        {
            printf("9");
        }

    }
    printf("\n");}
    return 0;
}
