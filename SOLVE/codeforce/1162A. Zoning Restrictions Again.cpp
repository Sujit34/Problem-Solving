#include<stdio.h>
int main()
{
    int n,h,m,p,q,r;
    int arr[60];
    while(scanf("%d %d %d",&n,&h,&m)==3)
    {
        for(int i=1;i<=n;i++)
        {
            arr[i]= h;
        }

        for(int i=0;i<m;i++)
        {
            scanf("%d %d %d",&p,&q,&r);

            while(p<=q)
            {

                if(arr[p]>r)
                {
                    arr[p]=r;
                }
                p++;
            }

        }
        int sum=0,cnt=1;
        while(cnt<=n)
        {
            sum=sum+arr[cnt]*arr[cnt];
            cnt++;
        }
        printf("%d\n",sum);

    }


}
