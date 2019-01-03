#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,s,index;
    while(scanf("%d",&a)==1){
    for(i=1;i<=a;i++){
    scanf("%d%d%d%d%d%d%d",&f,&g,&h,&e,&b,&c,&d);
    if(b>c&&c>d)
    j=(b+c)/2;
    else if(b>d&&d>c)
    j=(b+d)/2;
    else if(c>b&&b>d)
    j=(c+b)/2;
    else if(c>d&&d>b)
    j=(c+d)/2;
    else if(d>c&&c>b)
    j=(d+c)/2;
    else if(d>b&&b>c)
    j=(d+b)/2;
    else if(b==c&&c==d)
    j=(b+c)/2;
    else if(b==c&&b>d)
    j=(b+c)/2;
    else if(b==c&&b<d)
    j=(b+d)/2;
    else if(b==d&&b>c)
    j=(b+d)/2;
    else if(b==d&&b<c)
    j=(b+c)/2;
    else if(c==d&&c>b)
    j=(c+d)/2;
    else if(c==d&&c<b)
    j=(c+b)/2;
    s=j+e+f+g+h;
    index=s/10;
    switch(index){
        case 10:
        case 9:
        printf("Case %d: A\n",i);
        break;
        case 8:
        printf("Case %d: B\n",i);
        break;
        case 7:
        printf("Case %d: C\n",i);
        break;
        case 6:
        printf("Case %d: D\n",i);
        break;
        default:
        printf("Case %d: F\n",i);
        break;
    }}
}
return 0;
}
