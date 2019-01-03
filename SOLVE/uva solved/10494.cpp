#include<stdio.h>
#include<string.h>
int main()
{
    long long int i,j,l,d,m,t,y;
    char c,s[10000],v[10000];
    while(scanf("%s %c %lld",&s,&c,&d)==3){
    l=strlen(s);
    m=0;
    if(c=='/')
    {
        for(i=0,j=0;i<l;i++)
{
m=m*10+s[i]-'0';
if(m>=d)
{v[j]=(m/d)+'0';
j++;
m=m%d;}
else if(j>0&&m<d)
{
    v[j]=0+'0';
    j++;
}
}
v[j]='\0';
if(j==0)
{
    printf("0\n");
}
else{
printf("%s\n",v);
}
    }

else if(c='%')
{
    m=0;
    for(i=0,j=0;i<l;i++)
{
m=(m*10)+s[i]-'0';
m=m%d;

}

printf("%lld\n",m);
}
}
    return 0;

}
