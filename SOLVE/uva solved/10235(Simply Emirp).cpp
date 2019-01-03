#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
# define max 20000000
int prm[max];
int main()
{long long int i,j,k,l;
int n,r,p;
char s[100],s1[100];
memset(prm,0,sizeof(prm));
for(i=0;i<max;i++)
{
if(i%2==0)
prm[i]=1;
}
for(i=3;i<=sqrt(max)+1;i+=2)
{if(prm[i]!=1)
{for(j=i*i;j<=max;j+=i*2)
prm[j]=1;}
}
prm[2]=0;


while(scanf("%s",&s)==1){
k=0;
l=strlen(s);
n=atoi(s);
if(prm[n]!=0)
{
printf("%s is not prime.\n",s);
}
else
{

for(i=l-1;i>=0;i--)
{
s1[k]=s[i];
k++;
}
s1[k]='\0';
p=atoi(s);
n=atoi(s1);
if(p==n)
{
    printf("%s is prime.\n",s);
}
else if(prm[n]!=0&&prm[p]==0)
{
printf("%s is prime.\n",s);
}
 else if(prm[n]==0&&prm[p]==0)
{
printf("%s is emirp.\n",s);
}
}


}
return 0;
}
