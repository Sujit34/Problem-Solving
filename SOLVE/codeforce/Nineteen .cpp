#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#define pi 3.141592653589793
using namespace std;
int main()
{
    int l,j,i=0,n=0,e=0,t=0,count=0,p=1;
    char s[1001];
    gets(s);
    l=strlen(s);
    for(j=0;j<l;j++)
    {
        if(s[j]=='n')
        {
            n++;
        }
        if(s[j]=='i')
        {
            i++;
        }
        if(s[j]=='t')
        {
            t++;
        }
        if(s[j]=='e')
        {
            e++;
        }
    }
    if(n>=3&&i>=1&&t>=1&&e>=3)
    {
        count++;
        n=n-3;
        i=i-1;
        t=t-1;
        e=e-3;
        p=0;
    }
    if(p==0){
    while(n>=2&&i>=1&&t>=1&&e>=3)
    {
        count++;
        n=n-2;
        i=i-1;
        t=t-1;
        e=e-3;
    }
    }
    printf("%d\n",count);

}
