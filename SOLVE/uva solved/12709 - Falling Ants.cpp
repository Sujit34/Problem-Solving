#include<stdio.h>
int main()
{
    int t,l,w,h,vol,vol1,n,m;
    while(scanf("%d",&t)==1)
    {
        if(t==0)
        {
            return 0;
        }
        else{
        m=0;vol=0;vol1=0;

            while(t--)
            {
                scanf("%d%d%d",&l,&w,&h);
                vol=l*w*h;
                if(h>m)
                {
                   m=h;
                   vol1=vol;
                }
                if(h==m)
                {
                    if(vol>vol1)
                    {
                        vol1=vol;
                    }
                }
            }
            printf("%d\n",vol1);

    }
    }
}
