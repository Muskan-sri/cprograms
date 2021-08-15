#include<stdio.h>
int main()
    {
    int i,j,nr,nc,num[50][50],trans[50][50];
    printf("Enter the no of row and column: ");
    scanf("%d%d",&nr,&nc);
    printf("Enter the element of matrix : \n");
    for(i=0;i<nr;i++)
        {
        for(j=0;j<nc;j++)
            {
            scanf("%d",&num[i][j]);
            }
        }

        for(i=0;i<nr;i++)
            {
                for(j=0;j<nc;j++)
                    trans[j][i]=num[i][j];

            }
        printf("the transeverce matrix is: \n");
        for(i=0;i<nr;i++)
            {
            for(j=0;j<nc;j++)
                {
                    printf("%d \t",trans[i][j]);
                }
            printf("\n");
            }

    return 0;
    }
