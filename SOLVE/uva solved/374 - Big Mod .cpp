#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;


int bmod(int a,int b,int m)
{
    if(b==0)
    return 1;
    int x=bmod(a,b/2,m);
    x=(x*x)%m;
    if(b%2==1)
    x=(x*(a%m))%m;
    return x;
}


int main()
{
    int a,b,m;
    while(cin>>a>>b>>m){
    int p=bmod(a,b,m);
    cout<<p<<endl;

    }
}
