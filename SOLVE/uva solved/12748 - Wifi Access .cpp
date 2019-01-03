#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,move,x2,y2,x[101],y[101],z[101],able,dist,i,j,k,l;
    scanf("%d",&t);
    for(l=1;l<=t;l++)
    {
        printf("Case %d:\n",l);
        scanf("%d%d",&n,&move);
        for(i=0;i<n;i++)
        {
            scanf("%d%d%d",&x[i],&y[i],&z[i]);
        }

        for(i=1;i<=move;i++)
        {
            scanf("%d%d",&x2,&y2);
            able=0;
            for(j=0;j<n;j++)
            {
                dist=sqrt(((x2-x[j])*(x2-x[j]))+((y2-y[j])*(y2-y[j])));

                   if(dist<=z[j])
                {
                    printf("Yes\n");
                    able=1;
                    break;
                }



            }
            if(able==0)
            {
                printf("No\n");
            }
        }


    }
}
