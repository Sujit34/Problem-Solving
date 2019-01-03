#include<stdio.h>
#include<string.h>
char ar[210][210],a[210][210];
int count;
void dfs(int x,int y)
{
    int i,R[]={0,0,1,-1,-1,-1,1,1},C[]={1,-1,0,0,-1,1,-1,1},xx,yy;
    for(i=0;i<8;i++)
    {
        xx=x+R[i];
        yy=y+C[i];
        if(a[xx][yy]=='W')
        {
            count++;
            a[xx][yy]='L';
            dfs(xx,yy);
        }
    }
}
int main()
{
    int i,t,j,p,q;
    char s[210];
    scanf("%d",&t);
    getchar();
   // getchar();
    gets(ar[0]);
    while(t-->0)
    {
        i=0;
        while(gets(s)&&s[0]>0)
        {
            if(s[0]=='L'||s[0]=='W')
            {
                strcpy(ar[i],s);
                i++;
                j=i;
            }
            else
            {
                sscanf(s,"%d %d",&p,&q);
                for(i=0;i<j;i++)
                {
                    strcpy(a[i],ar[i]);
                }
                count=0;
            if(a[p-1][q-1]=='W')
            {
                count++;
                a[p-1][q-1]='L';
                dfs(p-1,q-1);
            }
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

