/*logic--
http://programmingwithtechnology.blogspot.com/2012/07/problemuva-10522.html
*/
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#define pi acos(-1.0)
using namespace std;
int main()
{
    int n,flag=0;
    cin>>n;
    double ha,hb,hc;
    while(cin>>ha>>hb>>hc)
    {


        double area=(1/(((1/ha)+(1/hb)+(1/hc))*((1/hb)+(1/hc)-(1/ha))*((1/hc)+(1/ha)-(1/hb))*((1/ha)+(1/hb)-(1/hc))));
        if(area>0)
        {
            double final_area=sqrt(area);
            printf("%.3lf\n",final_area);
        }
        else
        {
            printf("These are invalid inputs!\n");
            flag++;
            if(flag==n)
            {
                break;
            }
        }
    }
}
