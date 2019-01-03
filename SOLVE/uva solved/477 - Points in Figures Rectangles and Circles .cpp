//logic:This problem is relatively straightforward. You need to store each figure in an array (I used an array of structs for simplicity) and check if any point is contained within them in order. For the rectangle, check if the point is within bounds. For the circle, check if the euclidian distance from the center of the circle to the point is <= r (radius).

#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#define pi acos(-1.0)
#define EPS 1e-9
using namespace std;
int main()
{
    char s;
    int i=0;
    double a[1001][5],x1,y1,x2,y2,x,y,r ;

   while(scanf(" %c",&s)==1)
    {
        if(s=='*')break;
        //i++;
        if(s=='r')
        {
        scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
        a[i][0]=x1;
        a[i][1]=y1;
        a[i][2]=x2;
        a[i][3]=y2;
        a[i][5]=1.0;
        i++;
        }
        else
        {
            scanf("%lf %lf %lf",&x1,&y1,&r);
            a[i][0]=x1;
            a[i][1]=y1;
            a[i][4]=r;
            a[i][5]=2.0;
            i++;

        }
    }


int count=1;
    while(scanf("%lf %lf",&x,&y)==2)
    {
        if(x==9999.9&&y==9999.9)
        {
            break;
        }
        int flag=0;
        for(int j=0; j<i; j++)
        {
            if( x>a[j][0] && y<a[j][1] && x<a[j][2] && y>a[j][3])
            {
                printf("Point %d is contained in figure %d\n",count,j+1);
                flag=1;
            }
            else if( (sqrt(((x-a[j][0])*(x-a[j][0]))+((y-a[j][1])*(y-a[j][1]))))<a[j][4])
            {
                printf("Point %d is contained in figure %d\n",count,j+1);
                flag=1;
            }

        }
        if(flag==0)
            {printf("Point %d is not contained in any figure\n",count);}
        count++;

    }


}
