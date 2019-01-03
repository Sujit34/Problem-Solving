#include<stdio.h>
#define S 105
char gd[S][S];int count;
int dfs(int x,int y,int n,int m)
{
    int i,R[]={0,0,1,-1,-1,-1,1,1},C[]={1,-1,0,0,-1,1,-1,1},xx,yy;
    for(i=0;i<8;i++)
    {
        xx=x+R[i];
        yy=y+C[i];
        if(xx>=0&&xx<n&&yy>=0&&yy<m&&gd[xx][yy]=='*')
        {
            gd[xx][yy]='.';
            count++;
            dfs(xx,yy,n,m);
        }
    }
    return count;
}
int main()
{
    int n,m,i,j,cmp;
    while(scanf("%d%d",&n,&m)==2)
    {
        if(n==0&&m==0)
            break;
        for(i=0;i<n;i++)
        scanf("%s",gd[i]);
        int t=0;
        for(i=cmp=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(gd[i][j]=='*')
                {count=0;
                    count=dfs(i,j,n,m);
                    if(count==0)t++;
                }
            }
        }        printf("%d\n",t);
    }
    return 0;
}



