/*#include<stdio.h>
#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<queue>
#include<stack>
#include<time.h>
#include<map>
#include<iostream>
#include<vector>
#define pii pair<int,int>
#define CLR(a) memset(a,0,sizeof(a))
#define SET(a) memset(a,-1,sizeof(a))
#define LLI long long int
#define PI 3.14159265
#define EPS 1e-9
#define inf 1<<30
*/
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
    double ab,ac,bc,ratio,B,A,C,low,high,s1,s,smallarea,largearea,ad,ae,de;
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>ab>>ac>>bc>>ratio;

        A=acos(((ab*ab)+(ac*ac)-(bc*bc))/(2*ab*ac));
        A=(A*180)/pi;

        B=acos(((ab*ab)+(bc*bc)-(ac*ac))/(2*ab*bc));
        B=(B*180)/pi;

        C=acos(((ac*ac)+(bc*bc)-(ab*ab))/(2*ac*bc));
        C=(C*180)/pi;

        low=0;high=ab;


        while(fabs(low-high)>EPS)
        {
            ad=(low+high)/2;
            de=(sin((pi*A)/180)*ad)/sin((pi*C)/180);
            ae=(sin((pi*B)/180)*ad)/sin((pi*C)/180);
            s1=(ad+de+ae)/2;
            smallarea=sqrt(s1*(s1-ad)*(s1-de)*(s1-ae));

            s=(ab+ac+bc)/2;
            largearea=sqrt(s*(s-ab)*(s-bc)*(s-ac));
            largearea=largearea/(ratio+1);
            if(smallarea<largearea*ratio)
            {
                low=ad;
            }
            else
            {
                high=ad;
            }
        }
        printf("Case %d: %.9lf\n",i,ad);


    }
}
