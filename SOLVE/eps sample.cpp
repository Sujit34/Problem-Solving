    #include<cstdio>
    #include<iostream>
    #include<algorithm>
    #include<cmath>
    #include<cstring>
    #define pi acos(-1.0)
    #define eps 1e-6
    using namespace std;

    int approx_equals(double a, double b) {
    return a < b + eps && b < a + eps;
    }





    double area(double x1, double y1, double x2, double y2, double x3, double y3) {
    double X= (x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0;
    if(X<0)return X*-1;
    return X;
    }

    int main()
    {

    double a[15][15];
    char c,d;
    double xul,yul,xlr,ylr,x,y,rad,x1,x2,x3,y1,y2,y3;
    int i=0,j,count=1,flag;
    while(scanf(" %c",&c)==1)
    {
    if(c=='*')break;
    ++i;

    if(c=='r')
    {
    scanf("%lf %lf %lf %lf",&xul,&yul,&xlr,&ylr);
    a[i][0]=xul;
    a[i][1]=yul;
    a[i][2]=xlr;
    a[i][3]=ylr;
    a[i][5]=1.0;
    }
    else if(c=='c')
    {
    scanf("%lf %lf %lf",&x,&y,&rad);
    a[i][0]=x;
    a[i][1]=y;
    a[i][4]=rad;
    a[i][5]=2.0;

    }
    else if(c='t')
    {
    scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
    a[i][0]=x1;
    a[i][1]=y1;
    a[i][2]=x2;
    a[i][3]=y2;
    a[i][6]=x3;
    a[i][7]=y3;
    a[i][5]=3.0;


    }
    }
    while(scanf("%lf %lf",&x,&y)==2)
    {

    double p,q,r,t;
    if(approx_equals(x,9999.9) && approx_equals(y,9999.9))
    break;
    flag=0;
    for(j=1; j<=i; j++)
    {
    x1=a[j][0];
    y1=a[j][1];
    x2=a[j][2];
    y2=a[j][3];
    x3=a[j][6];
    y3=a[j][7];

    p=area(x1,y1,x2,y2,x,y);
    q=area(x1,y1,x3,y3,x,y);
    r=area(x2,y2,x3,y3,x,y);
    t=area(x1,y1,x2,y2,x3,y3);



    if(approx_equals(a[j][5],1.0) && x>a[j][0]+eps && a[j][1]>y+eps && a[j][2]>x+eps && y>a[j][3]+eps)
    {
    printf("Point %d is contained in figure %d\n",count,j);
    flag=1;
    }
    else if(approx_equals(a[j][5],2.0) && ((x-a[j][0])*(x-a[j][0]))+((y-a[j][1])*(y-a[j][1]))<a[j][4]*a[j][4]-eps)
    {
    printf("Point %d is contained in figure %d\n",count,j);
    flag=1;
    }

    else if(approx_equals(a[j][5],3.0) && approx_equals(p+q+r, t) && p>eps && q>eps && r>eps)
    {
    printf("Point %d is contained in figure %d\n",count,j);
    flag=1;
    }

    }
    if(flag==0)
    printf("Point %d is not contained in any figure\n",count);
    count++;

    }

    return 0;
    }
