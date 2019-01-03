#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,a[1000],i,p;
    scanf("%d",&t);
    while(t-->0)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        p=2*(a[n-1]-a[0]);
        printf("%d\n",p);
    }
    return 0;
}
/*
A________B______________C_____D
X______________________________

A, B, C and D are the stores while X is Michael’s car. To get to all the stores and return to his car, Michael would have to walk:

A to B
B to C
C to D
D to C
C to B
B to A

In essense, the total distance he would have traveled would be just twice the distance from A to D.

Consider now the following setup:

A________B______________C_____D
__________________X____________

For Michael to get to all stores and return to his car, he would need to walk:

X to B
B to A
A to B
B to X
X to C
C to D
D to C
C to X

Again, analyzing this series of walks, it is simply twice the distance from A to D.
*/
