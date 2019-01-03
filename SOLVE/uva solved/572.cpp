#include<stdio.h>
char a[105][105];
void dfs(int x,int y,int n,int m);
int main()
{
    int n,m,comp,i,j;
    while(scanf("%d%d",&n,&m)==2){
        if(n==0&&m==0)
        {
            return 0;
        }

    for( i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }
    for( i=comp=0;i<n;i++)
    {
        for( j=0;j<m;j++)
        {
            if(a[i][j]=='@')
            {
                dfs(i,j,n,m);
                comp++;
            }
        }
    }
    printf("%d\n",comp);
    }
    return 0;

}
void dfs(int x,int y,int n,int m)
{
     int i,R[]={0,0,1,-1,-1,-1,1,1},C[]={1,-1,0,0,-1,1,-1,1},xx,yy;

     for( i=0;i<8;i++)
     {
         xx=x+R[i];
         yy=y+C[i];
         if(xx>=0&&xx<n&&yy>=0&&yy<m&&a[xx][yy]=='@')
         {
             a[xx][yy]='*';
             dfs(xx,yy,n,m);
         }
     }
}

