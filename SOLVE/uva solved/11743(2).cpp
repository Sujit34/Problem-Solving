
#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,l,n,i,j,k,d[100],s,s1,sum,t,m,p;
    char r[100];
    char c[100];
    while(scanf("%d",&n)==1){
        getchar();
        for(k=1;k<=n;k++){s=0;s1=0;sum=0;
    gets(r);
    l=strlen(r);
    for(a=0,b=0;a<l;a++)
    {
        if(r[a]>='0'&&r[a]<='9')
       {c[b]=r[a];
        b++;}
    }c[b]='\0';
    for(i=0,j=0;i<=14;i=i+2,j++)
    {
        d[j]=(c[i]-'0')*2;

    }
    for(t=0;t<8;t++)
    {
        m=d[t];

        if(m>=10)
        {
            s=s+(m%10)+(m/10);
        }
        else
        {
            s=s+m;
        }
    }

    for(p=1;p<=15;p=p+2)
    {
        s1=s1+(c[p]-'0');
    }
    sum=sum+s+s1;

    if(sum%10==0)
    {
        printf("Valid\n");
    }
    else
    {
        printf("Invalid\n");
    }

}}
return 0;}

