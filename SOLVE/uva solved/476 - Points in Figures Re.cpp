#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#define pi acos(-1.0)
#define EPS 1e-9
using namespace std;
int main()
{
    char str[10001];
    double x,y,a[15],b[15],c[15],d[15];int i=0;
    while(gets(str)&&str[0]!='*')
    {
        sscanf(str,"%*s %lf %lf %lf %lf",&a[i],&b[i],&c[i],&d[i]);
        i++;

    }

    int count=1,flag;
    while(scanf("%lf %lf",&x,&y)==2)
    {
        if(x==9999.9&&y==9999.9)
        {
            break;
        }
        flag=0;
        for(int j=0;j<i;j++)
        {
            if(x>a[j]&&x<c[j]&&y>d[j]&&y<b[j])
            {
                printf("Point %d is contained in figure %d\n",count,j+1);
                flag=1;

            }
        }
        if(flag==0)
        {
            printf("Point %d is not contained in any figure\n",count);
        }
        count++;
    }
}
