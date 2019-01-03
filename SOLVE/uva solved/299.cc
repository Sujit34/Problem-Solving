#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int item[100],a,b,t,count,d=0;
    printf("How many numbers?");
    scanf("%d",&count);
    for(a=0;a<count;a++)
        scanf("%d",&item[a]);
    for(a=1;a<count;a++)
    for(b=count-1;b>=a;b--){
        if(item[b-1]>item[b]){
            t=item[b-1];
            item[b-1]=item[b];
            item[b]=t;
            d++;
        }
        printf("%d",d);
    }
    for(t=count-1;t>=0;t--)
        printf("%d",item[t]);
    return 0;
}

