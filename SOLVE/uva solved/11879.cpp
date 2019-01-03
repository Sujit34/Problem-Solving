#include<stdio.h>
#include<string.h>
int main()
{
    long long int i,j,l,m;
    char s[10000],v[10000];
    while(scanf("%s",&s)==1){
    l=strlen(s);
    if(l==1&&s[0]=='0')
    {
        return 0;
    }
    m=0;


for(i=0,j=0;i<l;i++)
{
m=m*10+s[i]-'0';
if(m>=17)
{v[j]=(m/17)+'0';
j++;
m=m%17;}

}
if(m==0)
{
    printf("1\n");
}
else
{
    printf("0\n");
}




}
    return 0;

}


