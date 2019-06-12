#include<stdio.h>
int main()
{
  int n,a,x,b,y,flag;
  while(scanf("%d %d %d %d %d",&n,&a,&x,&b,&y)==5)
  {
    flag=0;
      while(a!=x && b!=y)
      {
          if(a==n){a=0;}
          if(b==1){b=n+1;}

            a++;b--;

            if(a==b)
            {
                printf("YES\n");
                flag=1;
                break;
            }
      }

        if(flag==0){printf("NO\n");}
      }
}
