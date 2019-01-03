#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#define pi 3.141592653589793
using namespace std;
template< class T > inline T gcd(T a, T b) {while(b) b ^= a ^= b ^= a %= b;return a;}

int main()
{
    int n,m,a[1000],b[1000],i,j,p,t,r1,r2,q;
    cin>>n>>m;
    for(i=0;i<=n;i++)
    {
        cin>>a[i];
    }
    for(j=0;j<=m;j++)
    {
        cin>>b[j];
    }

    if(n==0&&m!=0)
    {

        printf("0/1\n");
        return 0;
    }

    if(n==m)
    {


        for(i=0;i<=n;i++)
        {
            if(a[i]!=0||b[i]!=0)
            {
              if(a[i]!=0&&b[i]==0)
              {
                  if(a[i]<0)
                  {
                      printf("-Infinity\n");
                      return 0;
                  }
                  else
                  {
                      printf("Infinity\n");
                      return 0;
                  }
              }


              if(a[i]==0&&b[i]!=0)
              {
                  printf("0/1\n");
                  return 0;
              }
            }
            if(a[i]!=0&&b[i]!=0)
           {
              if(a[i]>0&&b[i]>0)
              {
                  p=gcd(a[i],b[i]);
                  r1=a[i]/p;
                  r2=b[i]/p;
                  printf("%d/%d",r1,r2);
                  return 0;
              }
              if(a[i]>0&&b[i]<0)
              {
                  b[i]=b[i]*(-1);
                  p=gcd(a[i],b[i]);
                  r1=a[i]/p;
                  r2=b[i]/p;
                  printf("-%d/%d",r1,r2);
                  return 0;

              }
              if(a[i]<0&&b[i]>0)
              {
                  a[i]=a[i]*(-1);
                  p=gcd(a[i],b[i]);
                  r1=a[i]/p;
                  r2=b[i]/p;
                  printf("-%d/%d",r1,r2);
                  return 0;
              }
              if(a[i]<0&&b[i]<0)
              {
                  a[i]=a[i]*(-1);
                  b[i]=b[i]*(-1);
                  p=gcd(a[i],b[i]);
                  r1=a[i]/p;
                  r2=b[i]/p;
                  printf("%d/%d",r1,r2);
                  return 0;
              }
           }

        }



        if(a[0]<0&&b[0]>0)
        {
            a[0]=a[0]*(-1);
            p=gcd(a[0],b[0]);
            if(a[0]==b[0])
            {
                printf("-1/1\n");
                return 0;
            }

            if(a[0]>b[0])
            {
                r1=a[0]/p;
                r2=b[0]/p;
                printf("-%d/%d\n",r1,r2);
                return 0;
            }
            if(a[0]<b[0])
            {
                r1=a[0]/p;
                r2=b[0]/p;
                printf("-%d/%d\n",r1,r2);
                return 0;
            }





        }
        if(b[0]<0&&a[0]>0)
        {
            b[0]=b[0]*(-1);


            p=gcd(a[0],b[0]);
            if(a[0]==b[0])
            {
                printf("-1/1\n");
                return 0;
            }

            if(a[0]>b[0])
            {
                r1=a[0]/p;
                r2=b[0]/p;

                printf("-%d/%d\n",r1,r2);
                return 0;
            }
            if(a[0]<b[0])
            {
                r1=a[0]/p;
                r2=b[0]/p;


                printf("-%d/%d\n",r1,r2);
                return 0;
            }
        }
        if(a[0]<0&&b[0]<0)
        {
            a[0]=a[0]*(-1);
            b[0]=b[0]*(-1);
            p=gcd(a[0],b[0]);
            if(a[0]==b[0])
            {
                printf("1/1\n");
                return 0;
            }

            if(a[0]>b[0])
            {
                r1=a[0]/p;
                r2=b[0]/p;


               printf("%d/%d\n",r1,r2);
               return 0;
            }
            if(a[0]<b[0])
            {
                r1=a[0]/p;
                r2=b[0]/p;



                printf("%d/%d\n",r1,r2);
                return 0;




            }


        }
        if(a[0]>0&&b[0]>0)
        {

            p=gcd(a[0],b[0]);
            if(a[0]==b[0])
            {
                printf("1/1\n");
                return 0;
            }

            if(a[0]>b[0])
            {
                r1=a[0]/p;
                r2=b[0]/p;

                printf("%d/%d\n",r1,r2);
               return 0;
            }
            if(a[0]<b[0])
            {
                r1=a[0]/p;
                r2=b[0]/p;



                printf("%d/%d\n",r1,r2);
                return 0;
            }
        }






    }
    if(n>m)
    {
       for(i=0;i<=n;i++)
       {
           if(a[i]!=0)
           {
               p=a[i];
               break;
           }
       }
       for(i=0;i<=m;i++)
       {
           if(b[i]!=0)
           {
               q=b[i];
               break;
           }
       }
       if(p<0&&q<0)
       {
           printf("Infinity\n");
       }
       if(p>0&&q>0)
       {
           printf("Infinity\n");
       }
       if(p<0&&q>0)
       {
           printf("-Infinity\n");
       }
       if(p>0&&q<0)
       {
           printf("-Infinity\n");
       }

    }

    if(n<m)
    {
        printf("0/1\n");
        return 0;
    }


}
