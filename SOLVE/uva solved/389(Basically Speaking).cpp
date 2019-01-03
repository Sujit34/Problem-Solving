#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main(){
int i,j,l,n,k,m,p,r,d,d1,sum,p1;
char s[100],s1[100],res[100];
 while(scanf("%s %d %d",&s,&d,&d1)==3){

l=strlen(s);
m=0;p=0;sum=0;
n=atoi(s);
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
    printf("      0\n");
    continue;
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
    if(m<=7){
        for(i=6;i>=m;i--)
        {
            printf(" ");
        }
    for(i=m-1;i>=0;i--)
    {
        printf("%c",res[i]);
    }
    printf("\n");}

        else
    {
        printf("  ERROR\n");
    }
    }
return 0;
 }

