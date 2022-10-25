#include<stdio.h>
int main()
{
    int x,y,z,a,b,c,flag=0;
    scanf("%d %d %d %d %d %d",&x,&y,&z,&a,&b,&c);


        if(a>=x)
        {
            b=b+(a-x);
            flag=1;
        }
        if(b>=y && flag == 1)
        {
            c=c+(b-y);
            flag=2;
        }
        if(c>=z && flag == 2)
        {
            flag=3;
        }

        if(flag==3){printf("YES\n");}
        else {printf("NO\n");}

}
