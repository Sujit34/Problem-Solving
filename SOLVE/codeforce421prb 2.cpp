#include<stdio.h>
#include<string.h>
int main()
{
char s[100];
int i,l,j;
gets(s);
l=strlen(s);

for(i=0;i<l;i++)
{
if(s[i]!='A'&&s[i]!='H'&&s[i]!='I'&&s[i]!='M'&&s[i]!='O'&&s[i]!='P'&&s[i]!='U'&&s[i]!='V'&&s[i]!='W'&&s[i]!='X'&&s[i]!='Y')
{
printf("NO");
break;
}}

{int a=0;
for(i=l-1,j=0;i>=0;i--,j++)
{
if(s[i]!=s[j])
{
a++;
}

}
if(a==0)
{
printf("YES");
}
else
{
printf("NO");
}
}
}

