#include<stdio.h>
#include<string.h>
char a[210][210];
int d[210][210],count;
void dfs(int x,int y,int j)
{
    int xx,yy;
    xx=x;
    yy=y;
    int i,r[]={0,0,1,-1,-1,-1,1,1},c[]={1,-1,0,0,-1,1,-1,1};
    if(xx>=0&&xx<j&&yy>=0&&yy<j&&a[xx][yy]=='W'&&d[xx][yy]==0)
    {
        d[xx][yy]=1;
        count++;
        for(i=0;i<8;i++)
        {
            xx=x+r[i];
            yy=y+c[i];
            dfs(xx,yy,j);
        }
    }
}
int main()
{
    int t,p,q,i,j;
    char s[210];
    scanf("%d",&t);
    getchar();
    getchar();
    while(t-->0)
    {
        i=0;
        while(gets(s)&&s[0]>0)
        {
            if(s[0]=='L'||s[0]=='W')
            {
                strcpy(a[i],s);
                i++;
                j=strlen(s);
            }
            else
            {
                sscanf(s,"%d %d",&p,&q);
                memset(d,0,sizeof(d));
                count=0;
                dfs(p-1,q-1,j);
                printf("%d\n",count);
            }
        }
        if(t)
        {
            printf("\n");
        }

    }

    return 0;

}

