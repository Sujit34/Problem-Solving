#include<stdio.h>
#include<string.h>
int main()
{
int n,k,i,sum=0;
char s[100]={"donate"},s1[100]={"report"},s3[100];
scanf("%d",&n);
for(i=1;i<n;i++)
{
scanf("%s",&s3);

if(s3[0]==s[0])
{
scanf("%d\n",&k);
sum=sum+k;
}
else if(s3[0]==s1[0])
{
printf("%d\n",sum);
}
}
 return 0;
}
