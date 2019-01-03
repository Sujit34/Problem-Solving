#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int k,i,j,n,t,l;
    char s[10000];
    while(scanf("%d",&n)==1)
    getchar();
    {for(t=1;t<=n;t++){
    gets(s);
    l=strlen(s);
    k=sqrt(l);
    if(l==k*k)
    {
        for(i=0;i<k;i++)
        {
            for(j=i;j<l;j=j+k)
            {
                printf("%c",s[j]);
            }
        }
        printf("\n");
    }
    else
    {
        printf("INVALID\n");
    }
    }}
    return 0;

}
