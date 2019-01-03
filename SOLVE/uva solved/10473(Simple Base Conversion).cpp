#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
int i,j,l,n,k,m,p,r,d;
char s[100],s1[100],res[100];
while(gets(s)){
    if(s[0]=='-')
    {
        return 0;
    }
l=strlen(s);
m=0;p=0;d=0;
if(s[1]=='x')
{
    for(i=2;i<l;i++)
    {
        if(s[i]=='A')
        {
            d=d*16+10;
        }
        else if(s[i]=='B')
        {
            d=d*16+11;
        }
        else if(s[i]=='C')
        {
            d=d*16+12;
        }
        else if(s[i]=='D')
        {
            d=d*16+13;
        }
        else if(s[i]=='E')
        {
            d=d*16+14;
        }
        else if(s[i]=='F')
        {
            d=d*16+15;
        }
        else
        {
            d=d*16+(s[i]-'0');
        }
        }
        printf("%d\n",d);

}
else
{
    n=atoi(s);
    while(n>0)
    {
       r=n%16;
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
       n=n/16;

    }
    res[p]='\0';
    printf("0x");
    for(i=m-1;i>=0;i--)
    {
        printf("%c",res[i]);
    }
    printf("\n");
}







}
return 0;


}

