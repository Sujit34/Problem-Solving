#include<stdio.h>

char a[205][205];
int countB=0,countW=0,count=0;

void dfsB(int x,int y,int n);
void dfsW(int x,int y,int n);

int main()
{
    int n,comp,i,j;

    while(scanf("%d",&n)==1)
    {

        if(n==0)
        {
            return 0;
        }

    for( i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }

        countB=0;countW=0;

        for( j=0;j<n;j++)
        {
            if(a[0][j]=='b')
            {
                dfsB(0,j,n);

            }
        }

        for( i=0;i<n;i++)
        {
            if(a[i][0]=='w')
            {
                dfsW(i,0,n);

            }
        }



       count++;
       if(countB>0)
       {
           printf("%d B\n",count);
       }

       if(countW>0)
       {
           printf("%d W\n",count);
       }
    }
    return 0;

}
void dfsB(int x,int y,int n)
{
     int i,R[]={0,0,1,-1,-1,1},C[]={1,-1,0,0,-1,1},xx,yy;

     for( i=0;i<6;i++)
     {
         xx=x+R[i];
         yy=y+C[i];
         if(xx>=0&&xx<n&&yy>=0&&yy<n&&a[xx][yy]=='b')
         {
             a[xx][yy]='*';
             dfsB(xx,yy,n);
             if(xx==n-1)
             {
                 countB++;
                 break;
             }
         }
     }
}


void dfsW(int x,int y,int n)
{
     int i,R[]={0,0,1,-1,-1,1},C[]={1,-1,0,0,-1,1},xx,yy;

     for( i=0;i<6;i++)
     {
         xx=x+R[i];
         yy=y+C[i];

         if(xx>=0&&xx<n&&yy>=0&&yy<n&&a[xx][yy]=='w')
         {
             a[xx][yy]='*';
             dfsW(xx,yy,n);
             if(yy==n-1)
             {
                 countW++;
                 break;
             }
         }
     }
}

