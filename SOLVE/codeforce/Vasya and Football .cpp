#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#define pi 3.141592653589793
using namespace std;
int main()
{
    int i,j,n,a,b,d[1001],e[1001],f[1001],g[1001];
    char t1[101],t2[101],str[101],t,c;
    memset(d,0,sizeof(d));
    memset(e,0,sizeof(e));
    memset(f,0,sizeof(f));
    memset(g,0,sizeof(g));
    gets(t1);
    gets(t2);
    cin>>n;
    getchar();
    for(i=0;i<n;i++)
    {
        gets(str);
        sscanf(str,"%d %c %d %c",&a,&t,&b,&c);
        if(t=='h')
        {
            d[b]++;
            if(c=='r')
            {
                d[b]++;
            }
        }
        if(t=='a')
        {
            f[b]++;
            if(c=='r')
            {
                f[b]++;
            }
        }

        if(d[b]>=2&&e[b]!=1)
        {
            printf("%s %d %d\n",t1,b,a);


            d[b]=0;
            e[b]=1;
        }
        if(f[b]>=2&&g[b]!=1)
        {
            printf("%s %d %d\n",t2,b,a);
            d[b]=0;
            g[b]=1;
        }
   }
}
