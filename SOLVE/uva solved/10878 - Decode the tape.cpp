#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<cstdlib>
#define LLI long long int
#define ULL unsigned long long
#define pi acos(-1.0)
#define eps 1e-9
#define CLR(a) memset(a,0,sizeof(a))
#define repi(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
template< class T > inline T sq(T a) { return a * a; }
template< class T, class X > inline T _pow(T a,X y) {T z=1; repi(i,1,y){z*=a;} return z; }
template< class T > inline T gcd(T a, T b) {while(b) b ^= a ^= b ^= a %= b;return a;}
template< class T > inline T lcm(T a,T b) {a=abs(a);b=abs(b); return (a/gcd(a,b))*b;}




string BaseConversion(string xstr,int xbase,int ybase)
{
    string str="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    long long store[128],i,multi,sum;
    string ystr;

    for(i=sum=0;i<str.size();i++)
        store[str[i]]=i;
    multi=1;
    for(i=xstr.size()-1;i>=0;i--)
    {
        sum+=(store[xstr[i]]*multi);
        multi*=xbase;
    }
    while(true)
    {
        ystr.push_back(str[sum%ybase]);
        sum/=ybase;
        if(sum==0)
            break;
    }
    reverse(ystr.begin(),ystr.end());
    return ystr;
}



int main()
{
   // freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    char str[100],string1[1000],j=0,decimal[5];
    while(gets(str))
    {
        char binary[10];
        int l=0,res,i;
        int len=strlen(str);
        if(str[0]=='|')
        {
            for(i=1;i<len-1;i++)
            {
                if(str[i]==' ')
                {
                    binary[l++]='0';
                }
                else if(str[i]=='o')
                {
                    binary[l++]='1';
                }
            }

        string xstr;
         xstr.assign(binary,binary+l);

        string ystr=BaseConversion(xstr,2,10);

       for(i=0;i<ystr.size();i++)
        {
            decimal[i]=ystr[i];

        }
        decimal[i++]='\0';

         res=atoi(decimal);

        printf("%c",res);

        }
    }






}
