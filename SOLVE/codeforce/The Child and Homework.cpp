#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#define pi 3.141592653589793
using namespace std;
int main()

{
    int i,j,la,lb,lc,ld,flag=0;
    char sa[10001],sb[10001],sc[10001],sd[10001],p;
    gets(sa);
    gets(sb);
    gets(sc);
    gets(sd);
    la=strlen(sa)-2;
    lb=strlen(sb)-2;
    lc=strlen(sc)-2;
    ld=strlen(sd)-2;
    if(la>=2*lb&&la>=2*lc&&la>=2*ld)
    {
        flag++;
        p='A';
    }
    if(lb>=2*la&&lb>=2*lc&&lb>=2*ld)
    {
        flag++;
        p='B';
    }
    if(lc>=2*la&&lc>=2*lb&&lc>=2*ld)
    {
        flag++;
        p='C';
    }
    if(ld>=2*la&&ld>=2*lb&&ld>=2*lc)
    {
        flag++;
        p='D';
    }
    if(la<=.5*lb&&la<=.5*lc&&la<=.5*ld)
    {
        flag++;
        p='A';
    }
    if(lb<=.5*la&&lb<=.5*lc&&lb<=.5*ld)
    {
        flag++;
        p='B';
    }
    if(lc<=.5*la&&lc<=.5*lb&&lc<=.5*ld)
    {
        flag++;
        p='C';
    }
    if(ld<=.5*la&&ld<=.5*lb&&ld<=.5*lc)
    {
        flag++;
        p='D';
    }
    if(flag==1)
    {
        printf("%c\n",p);
    }
    else
    {
        printf("C\n");
    }


}
