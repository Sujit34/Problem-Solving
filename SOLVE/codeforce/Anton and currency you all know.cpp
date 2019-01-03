#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;
char s[100005];

int main()
{
    int i,j,p,l,temp,flag=0,index,m;
    cin>>s;
    l=strlen(s);
    m=s[l-1]-'0';
    for(i=0;i<l;i++)
    {
        p=s[i]-'0';
        if(p%2==0)
        {
           if(p<m)
           {
               index=i;
               flag=1;
               break;
           }
           else if(p>m)
           {
               index=i;
               flag=1;
           }
        }
    }
    if(flag==1)
    {
        //temp=s[index];
       //s[index]=s[l-1];
        //s[l-1]=temp;
        swap(s[index],s[l-1]);
        printf("%s\n",s);
    }
    else
    {
        printf("-1\n");
    }



}
