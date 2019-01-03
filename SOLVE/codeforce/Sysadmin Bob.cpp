#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int l,i,fal=0,j=0,p,count=0;
    char str[205],str2[2500];
    gets(str);
    l=strlen(str);
    if(str[0]=='@'||str[l-1]=='@')
        {
            cout<<"No solution";
            return 0;
        }
        int q=0;
    for(i=0;i<l;i++)
    {        if(str[i]=='@')
        {
            count++;
            if(str[i-1]!='@'&&str[i+1]!='@'&&str[i-1]!='1')
            {

                for(p=q;p<=i+1;p++)
                {
                    str2[j++]=str[p];
                    str[p]='1';
                }
                str2[j++]=',';
                q=p;
            }
            else
            {
                fal=1;
            }
        }
    }
    if(count==0)
    {
        cout<<"No solution";
        return 0;
    }
    if(q<l)
    {
        for(p=q;p<l;p++)
        {
            str2[j++]=str[p];
        }
    }


    str2[j++]='\0';
    count--;
    if(fal==0)
    {
        for(i=0;i<j-1;i++)
        {
            if(str2[i]==',')
            {
                count--;
                if(count>=0)
                {
                    cout<<str2[i];
                }
            }
            else
            {
                 cout<<str2[i];
            }


        }
    }
    else
    {
        cout<<"No solution";
    }

}

