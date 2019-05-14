#include<stdio.h>
int main()
{
    int n,m,e1,o1,e2,o2,x,sum;
    while(scanf("%d %d",&n,&m)==2)
    {
        e1=0;o1=0;e2=0;o2=0;

        for(int i=0;i<n;i++)
        {
            scanf("%d",&x);
            if(x%2==0){e1++;}
            else{o1++;}
        }
        for(int i=0;i<m;i++)
        {
            scanf("%d",&x);
            if(x%2==0){e2++;}
            else{o2++;}
        }
        sum=0;
        if(e1<o2){sum=sum+e1;}
        else {sum=sum+o2;}

        if(e2<o1){sum=sum+e2;}
        else {sum=sum+o1;}
        printf("%d\n",sum);
    }
}
