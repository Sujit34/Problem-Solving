#include<stdio.h>
#include<string.h>
int main()
{
    int i,p=0,a[10],ar[10],max=0;
    memset(ar,0,sizeof(ar));
    for(i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<6;i++)
    {
        ar[a[i]]++;
    }
    for(i=1;i<10;i++)
    {
        if(max<ar[i])
        {
            max=ar[i];
        }
    }
    if(max==6)
    {
        printf("Elephant\n");
    }
    if(max==4)
    {
        for(i=1;i<10;i++)
        {
            if(ar[i]==2)
            {
                printf("Elephant\n");
                p=1;
                break;
            }

        }
        if(p==0)
        {
            printf("Bear\n");
        }
    }
    if(max==5)
    {
         printf("Bear\n");
    }
    if(max<4)
    {
        printf("Alien\n");
    }

}
