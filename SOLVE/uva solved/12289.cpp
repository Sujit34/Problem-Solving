#include<stdio.h>
#include<string.h>
int main()
{
char s[10];
int n,l;
scanf("%d",&n);
while(n-->0){
scanf("%s",s);
l=strlen(s);

if(l==3)
{int p=0,q=0;
if(s[0]=='o')
{
p++;
}
if(s[1]=='n')
{
p++;
}
if(s[2]=='e')
{
p++;
}
if(s[0]=='t')
{
q++;
}
if(s[1]=='w')
{
q++;
}
if(s[2]=='o')
{
q++;
}


if(p>q)
{
printf("1\n");
}
else
{
printf("2\n");
}
}
else
{
printf("3\n");
}


}
return 0;}
