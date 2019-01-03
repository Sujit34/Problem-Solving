#include<stdio.h>
#include<string.h>

char a[55][55],p,arr1[3000],temp1;
int count,arr[3000],temp;

void dfs(int x,int y,int n,int m,char p)
{

   int R[]={0,0,1,-1},C[]={1,-1,0,0},xx,yy;

   for(int i=0;i<4;i++)
   {
       xx=x+R[i];
       yy=y+C[i];

       if(xx>=0&&xx<=n&&yy>=0&&yy<=m&&a[xx][yy]==p)
       {
           count++;
            a[xx][yy]='.';
           dfs(xx,yy,n,m,p);
       }
   }
}

void sort(int z)
{
    for(int i=0;i<z;i++)
    {
        for(int j=i;j<z;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

                temp1=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=temp1;

            }
            if(arr[i]==arr[j])
            {
                int u=arr1[i];
                int v=arr1[j];
                if(u<v)
                   {
                       temp1=arr1[i];
                       arr1[i]=arr1[j];
                       arr1[j]=temp1;
                   }

            }

        }
    }
    for(int i=z-1;i>=0;i--)
    {
        printf("%c %d\n",arr1[i],arr[i]);
    }

}

int main()
{
    int i,j,n,m,problem=1;
    while(scanf("%d %d",&n,&m)==2)
    {
        count=0;

        if(n==0 & m==0){return 0;}
        printf("Problem %d:\n",problem++);

        for(i=0;i<n;i++)
        {
            scanf("%s",a[i]);
        }

        int z=0;

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(a[i][j]!='.')
                {
                    p=a[i][j];
                    count=0;
                    dfs(i,j,n,m,p);
                    if(count==0){count++;}
                    arr[z]=count;
                    arr1[z]=p;
                    z++;

                }
            }

        }
        sort(z);
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                a[i][j]='.';
            }
        }

    }
}
