#include <stdio.h>
#define MAX 50
int main()
{
    int BT[MAX],WT[MAX],TAT[MAX];
    int X,i,j,k;
    printf("Enter The Size of P --> ");
    scanf("%d\n",&X);
    for(i=0;i<X;i++)
    {
        scanf("%d",&BT[i]);
    }
    for(i=0;i<X;i++)
    {
        for(j=i+1;j<X;j++)
        {
            if(BT[i]>BT[j])
            {
                k = BT[i];
                BT[i] = BT[j];
                BT[j] = k;
            }
        }
    }
   for (i = 0; i < X; ++i){
      printf("\n%dP --> %d\t",(i+1), BT[i]);
   }
    printf("\nWaiting Time\n");
    WT[0] = 0;
    for(i=1;i<X;i++)
    {
        WT[i]=BT[i-1]+WT[i-1];
    }
    for(i=0;i<X;i++)
    {
        printf("%d\t",WT[i]);
    }
    printf("\nTurn Around Time\n");
    for(i=0;i<X;i++)
    {
        TAT[i] = WT[i]+BT[i];
    }
    for(i=0;i<X;i++)
    {
        printf("%d\t",TAT[i]);
    }
}



