#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int N,dA1,dA2,dA,dC1,dC2,dC,dT1,dT2,dT,dG1,dG2,dG;
    char str[55];
    while(scanf("%d",&N)==1)
    {
        getchar();
        for(int i=0;i<N;i++){scanf("%c",&str[i]);}

        int sum=1e7;
        for(int i=0;i<N-3;i++)
        {

            dA1=abs(str[i]-'A');
            dA2=26-abs(str[i]-'A');
            dA= min(dA1,dA2);


            dC1=abs(str[i+1]-'C');
            dC2=26-abs(str[i+1]-'C');
            dC= min(dC1,dC2);


            dT1=abs(str[i+2]-'T');
            dT2=26-abs(str[i+2]-'T');
            dT= min(dT1,dT2);


            dG1=abs(str[i+3]-'G');
            dG2=26-abs(str[i+3]-'G');
            dG= min(dG1,dG2);


            sum = min(sum,dA+dC+dT+dG);
        }
        printf("%d\n",sum);
    }

}
