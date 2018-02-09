#include<stdio.h>
void main()
{
    int N[1000],k,i,limit;
    printf("\nenter the limit\n");
    scanf("%d",&limit);
    printf("ENTER %d VALUES\n",limit);
    for(i=0;i<limit;i++)
    {
    scanf("\t%d",&N[i]);
    }
    k=N[0];
    for(i=1;i<limit;i++)
    {
        if(k>N[i])
        k=k;
        else
        k=N[i];
    }
    printf("\nmaximum number is:%d\n",k);
}
