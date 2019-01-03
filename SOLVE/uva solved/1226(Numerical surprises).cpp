#include<stdio.h>
#include<string.h>
int main()
{
long long int i,j,l,d,m,t,y,n,x;
char c,s[10000],v[10000];
scanf("%lld",&n);
getchar();
for(x=1;x<=n;x++){
scanf("%lld %s",&d,&s);
l=strlen(s);
m=0;
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
printf("%lld\n",m);
}
return 0;
}



