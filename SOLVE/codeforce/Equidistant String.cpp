#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    char s[100001];
    char t[100001];
    char str[100001];
    cin>>s;
    cin>>t;
    int l,p=0;
    l=strlen(s);
    int count=0;
    for(int i=0;i<l;i++)
    {
        if(s[i]=='0'&&t[i]=='0')
        {
            str[p++]='0';
        }


        if(s[i]=='1'&&t[i]=='1')
        {
            str[p++]='1';
        }



        if((s[i]=='0'&&t[i]=='1')|| (s[i]=='1'&&t[i]=='0'))
        {
            count++;

            if(count%2==0)
            {
                str[p++]=s[i];
            }
            else
            {
                str[p++]=t[i];
            }
        }
    }
    str[p++]='\0';
    if(count%2==0)
    {
        cout<<str;
    }
    else
    {
        cout<<"impossible";
    }
}
