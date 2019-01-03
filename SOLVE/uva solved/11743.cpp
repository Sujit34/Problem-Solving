#include<stdio.h>
#include<string.h>
int main()
{
    int n,b,l,d[100],i,j,k,s,s1,p,sum,t,m,c,o,f;
    char a[100];
    char w[100];
    while(scanf("%d",&n)==1){
        getchar();
        for(b=1;b<=n;b++){s=0,s1=0,sum=0;
    gets(w);
    f=strlen(w);
    for(c=0,o=0;c<f;c++)
    {
        if(w[c]=='1'||w[c]=='2'||w[c]=='3'||w[c]=='4'||w[c]=='5'||w[c]=='6'||w[c]=='7'||w[c]=='8'||w[c]=='9'||w[c]=='0')
        {a[o]=w[c];o++;}
    }a[o]='\0';
    l=strlen(a);
    k=l/2;

    for(i=(l-2),j=0;i>=0;i=i-2,j++)
    {
        d[j]=(a[i]-'0')*2;

    }
    for(t=0;t<k;t++)
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
    for(p=(l-1);p>=0;p=p-2)
    {
        s1=s1+(a[p]-'0');
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


}
    }return 0;
    }


