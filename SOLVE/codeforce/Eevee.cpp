#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    char str[10][10]={"jolteon", "flareon","umbreon", "leafeon","glaceon","sylveon"};
    char input[10],p;
    int n,track,ar[100];
    memset(ar,0,sizeof(ar));
    cin>>n;
    cin>>input;
    if(n==8)
    {
        cout<<"vaporeon";
    }
    if(n==6)
    {
        cout<< "espeon";
    }
    if(n==7)
    {
        for(int i=0;i<7;i++)
        {
            if(input[i]!='.')
            {
                p=input[i];
                for(int j=0;j<6;j++)
                {
                   if(str[j][i]==p)
                {
                    ar[j]++;
                }
                }
            }
        }
        int max=0;
        for(int i=0;i<6;i++)
        {
            if(ar[i]>max)
            {
                max=ar[i];
                track=i;
            }
        }
        cout<<str[track];
    }

}

