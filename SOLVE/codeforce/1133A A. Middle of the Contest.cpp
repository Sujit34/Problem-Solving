#include<stdio.h>
#include<string.h>

int main()
{
    int total,total1,total2,hr,minute;
    char str1[10];
    char str2[10];
    scanf("%[^\n]%*c", str1);
    scanf("%[^\n]%*c", str2);

    total1=((str1[0]-'0')*10 + (str1[1]-'0') ) * 60 + ((str1[3]-'0')*10 + (str1[4]-'0') );
    total2=((str2[0]-'0')*10 + (str2[1]-'0') ) * 60 + ((str2[3]-'0')*10 + (str2[4]-'0') );
    total=total2-total1;
    total=total/2;


    hr= total/60;


    minute = total - (hr*60);

    hr = ((str1[0]-'0')*10 + (str1[1]-'0') ) + hr;
    minute = ((str1[3]-'0')*10 + (str1[4]-'0') ) + minute;

    if(minute>=60){hr=hr+1;minute=minute-60;}



    if(hr<=9 && minute<=9) {printf("0%d:0%d\n",hr,minute);}
    else if(hr<=9 && minute>9) {printf("0%d:%d\n",hr,minute);}
    else if(hr>9 && minute<=9) {printf("%d:0%d\n",hr,minute);}
    else if(hr>9 && minute>9) {printf("%d:%d\n",hr,minute);}
}
