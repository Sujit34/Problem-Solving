#include<stdio.h>
int main()
{
int x,y,xx,yy,find=0;
int R[]={0,0,1,-1,-1,-1,1,1};
int C[]={1,-1,0,0,-1,1,-1,1};
while(scanf("%d %d %d %d",&x,&y,&xx,&yy)==4){
    if(x==0&&y==0&&xx==0&&yy==0)
    {
        return 0;
    }
    else{
if(xx==x&&yy==y)
printf("0\n");
else
{for(int i=0;i<8;i++)
{
int a=x,b=y;
while(1)
{
a+=R[i];
b+=C[i];
if(a==xx&&b==yy)
{find=1;
break;
}
else if(a>8||b>8||a<0||b<0)
break;

}
}

if(find==1)
printf("1\n");
else
printf("2\n");
}
    }
}
return 0;

}

