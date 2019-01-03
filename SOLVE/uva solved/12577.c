#include<stdio.h>
#include<string.h>
int main(){
    int a=1,b,i,j,k;
    char d[10]={"Hajj"};
    char e[10]={"Umrah"};
    char word1[80];
while(gets(word1)){
    k=strlen(word1);
    if(word1[0]=='*')
    return 0;
    else{
    i=strlen(d);
    j=strlen(e);
    if(k==i){
    printf("Case %d: Hajj-e-Akbar\n",a);
    a++;}
    else if(k==j){
    printf("Case %d: Hajj-e-Asghar\n",a);
    a++;}}

}
return 0;}
