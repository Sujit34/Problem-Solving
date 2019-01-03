#include<stdio.h>
#include<math.h>
int main()
{
    int n,p1,i,j,s,p;
    while(scanf("%d",&p1)==1){
        for(j=1;j<=p1;j++)
        {s=0;
    scanf("%d",&n);
    p=sqrt(n);
    printf("Case #%d: %d",j,n);
    for(i=2;i<=sqrt(n);i++){
            if(n%i==0){
                printf(" = %d * %d",i,n/i);
                s++;}
                if(s==2)
                {
                    break;
                }

}
        printf("\n");
        }
    }
    return 0;
}

