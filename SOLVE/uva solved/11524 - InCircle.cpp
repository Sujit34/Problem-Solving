/*logic---
Known inscribed circle inscribed circle radius and dotted with triangular cut trilateral proportion AP: PB = n1: m1, BQ: QC = n2: m2, CR: RA = n3: m3, find the area of a triangle.
 
Algorithms: There triangle inscribed circle nature, assuming AP = AR = x, is easy to know PB = BQ = x * n1 / m1, QC = RC = x * n1 / m1 * n2 / m2
      The triangle ABC trilateral long a, b, c easy to know.
Area of a triangle by three small triangle area too,
                             area = a * r / 2 + b * r / 2 + c * r / 2
      Helen formula can also be obtained
             area = sqrt (p * (p-a) * (p-b) * (p-c)), p = (a + b + c) / 2
      These two simultaneous equations, and easy to get
                             x = r * sqrt (m1 * m1 * m2 / n1 / n1 / n2 + m1 * m2 / n1 / n2 + m1 / n1)
      Any further into the above equation to get a triangle area
 */




#include<stdio.h>
#include<math.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    double r,m1,m2,m3,n1,n2,n3;
    cin>>t;
    while(t--)
    {
        cin>>r>>m1>>n1>>m2>>n2>>m3>>n3;

        double   x=sqrt( r*r*( m1*m1*m2/n1/n1/n2 + m1*m2/n1/n2 + m1/n1) );
        double area=(((x+ x * n1 / m1)+( x * n1 / m1+ x * n1 / m1 * n2 / m2)+( x * n1 / m1 * n2 / m2+x))*r)/2;
        printf("%.4lf\n",area);
    }
}
