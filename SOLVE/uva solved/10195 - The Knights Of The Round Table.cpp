

#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c,s,r,area;
    while(cin>>a>>b>>c){
        if(a+b+c==0)
        {
            printf("The radius of the round table is: 0.000\n");

        }
        else{
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    r=area/s;

    printf("The radius of the round table is: %.3lf\n",r);
        }
    }

}


