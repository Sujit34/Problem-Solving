//time

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>

int main() {
clock_t start, stop;
double t = 0.0;
int y=1;
scanf("%d",&y);
assert((start = clock())!=-1);//Start timer

//your calculation start

printf("%d",y);
//end

stop = clock();//Stop timer
t = (double) (stop-start)/CLOCKS_PER_SEC;

printf("Run time: %f\n", t);

return(0);
}
