#include<stdio.h>
void quicksort(int x[100],int,int);
int main(){
  int size,i;

  int x[100];
  scanf("%d",&size);

   for(i=0;i<size;i++)
   scanf("%d",&x[i]);

   quicksort(x,0,size-1);
  for(i=0;i<size;i++)
  printf("%d ",x[i]);

  return 0;
}

void quicksort(int x[100],int first,int last){
    int j,temp,i;

     if(first<last){
          i=first-1;j=last;
            while(1)
            {
                while(x[++i]<x[last]);
                while(x[--j]>x[last]);
                if(i>=j)break;
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;

            }
            temp=x[i];
            x[i]=x[last];
            x[last]=temp;
         quicksort(x,first,i-1);
         quicksort(x,i+1,last);

    }
}


