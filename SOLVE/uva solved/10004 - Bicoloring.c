#include<stdio.h>
#define inf 100000;

int dis[205][205],color[205],countnode[205];
int node,edge;
int connection[205][205];

struct q
{
    int val;
    q *left;
    q *right;
    q()
    {
        left=NULL;/**<  */
        right=NULL;
    }

} *first=NULL, *last=NULL;


void push(int vv)
{

    q *nn= new q();
    nn->left=last;
    nn->val=vv;
    nn->right=NULL;
//
    if(first==NULL)
    {
        first=nn;
        //last=nn;
    }
	else
	{
	last->right=nn;

	}
	last=nn;
}


void pop()
{
    q *t=first;
    if(first!=last)
    {
    first=first->right;
    first->left=NULL;
    }
    else
    {
        first=NULL;
        last=NULL;
    }

    if(t!=NULL)
    delete(t);
}

void toinf()
{
    for(int i=0;i<205;i++)
    {
        for(int j=0;j<205;j++)
        {
            connection[i][j]=-inf;
        }
        countnode[i]=0;
    }


}

int main()
{

    while(scanf("%d",&node)==1)
    {
        toinf();





        int x,y;

        if(node==0){return 0;}

        for(int i=0;i<node;i++)
        {
            color[i]=-1;
        }

        scanf("%d",&edge);

        for(int i=0;i<edge;i++)
        {
            scanf("%d %d",&x,&y);

            connection[x][countnode[x]++]=y;

        }


        int f=0;
        color[0]=0;
        push(0);

        while(first!=NULL)
        {

            int p=first->val;



            for(int i=0;i<countnode[p];i++)
            {
                if(color[connection[p][i]]==-1)
                {
                    if(color[p]==0)
                     color[connection[p][i]]=1;
                    else
                    color[connection[p][i]]=0;
                     push(connection[p][i]);
                }
                else
                {
                    if(color[connection[p][i]]==color[p]){
                        f=1;
                        break;
                    }
                }
            }
            if(f==1)
                break;
            pop();

        }

        if(f==1)
        printf("NOT BICOLORABLE.\n");
        else
        printf("BICOLORABLE.\n");

    }

}
