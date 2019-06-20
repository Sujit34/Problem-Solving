#include<stdio.h>

void Swap(int &x, int &y){
    int tmp = x;
    x = y;
    y = tmp;
    return;
}

void Sort(int &a, int &b, int &c){
    if(a>b){
        Swap(a,b);
    }
    if(a>c){
        Swap(a,c);
    }
    if(b>c){
        Swap(b,c);
    }
    return;
}

int main()
{
    int a,b,c,d,sum=0;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    Sort(a,b,c);
    if(b-a<d){sum=sum+(d-(b-a));}
    if(c-b<d){sum=sum+(d-(c-b));}
    printf("%d\n",sum);

}
