#include<stdio.h>
#include<math.h>
#define  max 20000000
int ip[max];
int main()
{
 int n,i,j,m,t;

for(i=1;i<=max;i++)
{
if(i%2==0)
ip[i]=1;
}

for ( i = 3 ; i <= sqrt(max)+1 ; i+=2 )
{
if ( ip[i] != 1 )
{
for ( j = i*i ; j <= max ; j+=2*i )
ip[j]=1;
}
}
ip[2]=0;
while(scanf("%d",&n)==1)
{
    if(n<8)
    {
        printf("Impossible.\n");
    }
    else
    {
        if(n%2==0)
        {
            printf("2 2 ");
             m=n-4;
        }
        else if(n%2!=0)
        {
            printf("2 3 ");
            m=n-5;
        }

        for(t=2;t<=m;t++)
        {
            if(ip[t]!=1&&ip[m-t]!=1)
            {
                printf("%d %d\n",t,m-t);
                break;
            }
        }
    }
}
}
