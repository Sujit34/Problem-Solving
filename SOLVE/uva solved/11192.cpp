#include<stdio.h>
#include<string.h>
int main()
{
    int l,k,t,i,n,j,p;
    char s[101];
    char r[101];
while(scanf("%d",&n)==1){

       if(n==0)
       {
           return 0;
       }

   else{getchar();
        gets(s);
    l=strlen(s);
    k=l/n;
    for(i=0;i<l;i=i+k)
    {p=0;
        for(j=i;p<k;j++)
        {
            r[p]=s[j];
            p++;
        }r[p]='\0';
        for(p=(k-1);p>=0;p--)
        {
            printf("%c",r[p]);
        }
    }
    printf("\n");}}
    return 0;
}






