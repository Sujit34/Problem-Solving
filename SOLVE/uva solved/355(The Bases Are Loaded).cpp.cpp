#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
int i,j,l,n,k,m,p,r,d,d1,p1,t,c,u,q;
long long int sum;
char s[100],s1[100],res[100],s3[100],s4[100];
while(scanf("%d %d %s",&d,&d1,&s)==3){
t=0;q=0;
strcpy(s3,s);
while(t<2){
l=strlen(s);
m=0;p=0;sum=0;
if(d<=10){
for(i=l-1,j=0;i>=0;i--)
{
p1=s[i]-'0';
sum=sum+(p1*pow(d,j));
j++;
}
}
else
{
for(i=0;i<l;i++)
{

if(s[i]=='A')
{
sum=sum*d+10;
}
else if(s[i]=='B')
{
sum=sum*d+11;
}
else if(s[i]=='C')
{
sum=sum*d+12;
}
else if(s[i]=='D')
{
sum=sum*d+13;
}
else if(s[i]=='E')
{
sum=sum*d+14;
}
else if(s[i]=='F')
{
sum=sum*d+15;
}
else
{
sum=sum*d+(s[i]-'0');
}
}
}
if(sum==0)
{
     printf("%s base %d = %s base %d\n",s3,d,s3,d1);
     q=1;
     break;
}

while(sum>0)
{
r=sum%d1;
m++;
if(r==10)
{
res[p]='A';
p++;
}
else if(r==11)
{
res[p]='B';
p++;
}
else if(r==12)
{
res[p]='C';
p++;
}
else if(r==13)
{
res[p]='D';
p++;
}
else if(r==14)
{
res[p]='E';
p++;
}
else if(r==15)
{
res[p]='F';
p++;
}
else if(r>=0&&r<=9)
{
res[p]=r+'0';
p++;
}
sum=sum/d1;

}
res[p]='\0';
for(i=m-1,j=0;i>=0;i--)
{
    s1[j]=res[i];
    j++;
}
s1[j]='\0';
c=d;
d=d1;
d1=c;
strcpy(s4,s);
strcpy(s,s1);
t++;
}
u=strcmp(s3,s1);
if(u==0&&q==0)
{
    printf("%s base %d = %s base %d\n",s3,d,s4,d1);
}
else if(u!=0&&q==0)
{
    printf("%s is an illegal base %d number\n",s3,d);
}

}
return 0;
}
