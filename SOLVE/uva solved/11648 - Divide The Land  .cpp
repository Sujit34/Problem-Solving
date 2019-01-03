#include<cstdio>
#include<iostream>
#include<cmath>
#define EPS 1e-9
using namespace std;
int main()
{
    double t,ab,bc,cd,ad,h,area,ap,bq,up,low,bf,h1,ae,ap1,bq1,ef,area1,s,triangle_area;
    int p=1;
    cin>>t;
    while(t--){
    cin>>ab>>cd>>ad>>bc;


    s=(ad+bc+ab-cd)/2;
    triangle_area=sqrt(s*(s-ad)*(s-bc)*(s-(ab-cd)));
    h=(triangle_area*2)/(ab-cd);

    area=0.5*h*(ab+cd);
    ap=(ad*ad-bc*bc+ab*ab-2*ab*cd+cd*cd)/(2*ab-2*cd);
    bq=ab-cd-ap;
    up=ad;low=0.0;
    area=area/2;
    while(fabs(up-low)>EPS)
    {
        ae=(up+low)/2;
        bf=bc*ae/ad;
        h1=h*ae/ad;
        if(ap<0)
        {
             ap1=(-1)*sqrt(abs(ae*ae-h1*h1));
        }
        else if(ap>=0)
        {
            ap1=sqrt(abs(ae*ae-h1*h1));
        }
        if(bq<0)
        {
            bq1=(-1)*sqrt(abs(bf*bf-h1*h1));
        }
        else if(bq>=0)
        {
            bq1=sqrt(abs(bf*bf-h1*h1));
        }


       ef=ab-ap1-bq1;

       area1=(ab+ef)*h1*0.5;

       if(area1>area)
       {
           up=ae;
       }
       else
       {
           low=ae;
       }


    }

   printf("Land #%d: %.6lf %.6lf\n",p++,ae,bf);

    }

}
