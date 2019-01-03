#include<stdio.h>
#include<string.h>
int main()
{
int i,l,j,k,t,n,r;
char s[100];
char c[100];
char s1[100];
char c1[100];
while(scanf("%d",&n)==1){
getchar();
for(r=1;r<=n;r++){
gets(s);
gets(s1);
l=strlen(s);
k=strlen(s1);
if(l==k){
for(i=0,j=0;i<l;i++)
{
if(s[i]=='b'||s[i]=='c'||s[i]=='d'||s[i]=='f'||s[i]=='g'||s[i]=='h'||s[i]=='j'||s[i]=='k'||s[i]=='l'||s[i]=='m'||s[i]=='n'||s[i]=='p'||s[i]=='q'||s[i]=='r'||s[i]=='s'||s[i]=='t'||s[i]=='v'||s[i]=='w'||s[i]=='x'||s[i]=='y'||s[i]=='z')
{
c[j]=s[i];
j++;
}
}c[j]='\0';
for(i=0,j=0;i<k;i++)
{
if(s1[i]=='b'||s1[i]=='c'||s1[i]=='d'||s1[i]=='f'||s1[i]=='g'||s1[i]=='h'||s1[i]=='j'||s1[i]=='k'||s1[i]=='l'||s1[i]=='m'||s1[i]=='n'||s1[i]=='p'||s1[i]=='q'||s1[i]=='r'||s1[i]=='s'||s1[i]=='t'||s1[i]=='v'||s1[i]=='w'||s1[i]=='x'||s1[i]=='y'||s1[i]=='z')
{
c1[j]=s1[i];
j++;

}
}c1[j]='\0';
t=strcmp(c,c1);
if(t==0)
{
printf("Yes\n");
}
else
{
printf("No\n");
}}
else
printf("No\n");}
}
return 0;

}
