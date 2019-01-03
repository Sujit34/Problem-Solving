#include<stdio.h>
#include<string.h>
int main()
{
    char a[10000];
    int m, l,i;
    while(scanf("%s",&a)==1)
    {m=0;
        l=strlen(a);
        if(a[0]=='0'&&l==1)
        break;
        else{
        for(i=0;i<l;i++)
        {
            m=(m*10)+a[i]-'0';
            m=m%11;
            }
        if(m==0)
        printf("%s is a multiple of 11.\n",a);
        else
        printf("%s is not a multiple of 11.\n",a);

    }}
    return 0;
}
