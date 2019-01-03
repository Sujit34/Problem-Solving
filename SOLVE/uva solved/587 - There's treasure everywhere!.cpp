#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<iostream>
using namespace std;
int main()
{
    char str[205];
    int i,l,t,dis,count=1;
    double x,y,distance;
    while(gets(str)&&strcmp(str,"END"))
    {
        x=0;y=0;
        l=strlen(str);
        for( i=0;i<l;)
        {
            if(str[i]>=48&&str[i]<=57)
            {

                char temp[15]={'\0'};
                t=0;

                while(str[i]>=48&&str[i]<=57)
                {
                    temp[t++]=str[i++];
                }
                dis=atoi(temp);


                char direction[5]={'\0'};
                t=0;
                while(str[i]!=','&&str[i]!='.')
                {
                    direction[t++]=str[i++];
                }



                    if (strcmp(direction,"N")== 0)
                    {
                        y=y+dis;
                    }

                    if (strcmp(direction,"S")== 0)
                    {
                        y=y-dis;
                    }
                    if (strcmp(direction,"E")== 0)
                    {
                        x=x+dis;
                    }
                    if (strcmp(direction,"W")== 0)
                    {
                        x=x-dis;
                    }
                    if (strcmp(direction,"NW")== 0)
                    {
                        x =x- sqrt(dis*dis/(double)2);
                        y =y+ sqrt(dis*dis/(double)2);
                    }
                    if (strcmp(direction,"NE")== 0)
                    {
                        x =x+ sqrt(dis*dis/(double)2);
                        y = y+sqrt(dis*dis/(double)2);
                    }
                    if (strcmp(direction,"SE" )== 0 )
                    {
                        x =x+ sqrt(dis*dis/(double)2);
                        y = y-sqrt(dis*dis/(double)2);
                    }
                    if (strcmp(direction,"SW") == 0 )
                    {
                        x =x- sqrt(dis*dis/(double)2);
                        y = y-sqrt(dis*dis/(double)2);
                    }

        }

            else
            {
                i++;
            }
        }

        printf("Map #%d\n",count++);
        printf("The treasure is located at (%.3lf,%.3lf).\n",x,y);
        distance=sqrt(x*x+y*y);
        printf("The distance to the treasure is %.3lf.\n",distance);
        printf("\n");



    }

}
