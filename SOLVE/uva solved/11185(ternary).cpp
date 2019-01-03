#include<stdio.h>
int main()
{
    int i,j,N,r;
    char s[100];
    while(scanf("%d",&N)==1)
    {

        if(N<0)
        {
            return 0;
        }
        j=0;
        while(N>0)
        {
            r=N%3;
            N=N/3;
            s[j]=r+'0';
            j++;
        }
        s[j]='\0';
        if(j==0)
        {
            printf("0");
        }
       for(i=j-1;i>=0;i--)
       {
           printf("%c",s[i]);
       }
       printf("\n");
    }
    return 0;
}
