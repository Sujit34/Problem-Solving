#include <stdio.h>
int main()
{ int P,B,H,W;
while(scanf("%d %d %d %d",&P,&B,&H,&W)==4)
{
int cost=B,i;
while(H--)
{
int price,bed;
scanf("%d",&price);
for(i=1;i<=W;i++)
{
scanf("%d",&bed);
if(bed>=P)
{
if(cost>=(P*price))
cost=P*price;
}
}
}
if(cost < B)
printf("%d\n",cost);
else
printf("stay home\n");

}
return 0;

}
