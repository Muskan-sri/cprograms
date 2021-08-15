#include<stdio.h>
int main()
{
    int m,n,i,j,matrix1[10][10],matrix2[10][10],sum[10][10];
    printf("Enter the no of row: ");
    scanf("%d",&m);
    printf("Enter the no of coloumn: ");
    scanf("%d",&n);
    printf("Enter the element of matrix1 : ");
    for(i=0;i<m;i++)
        {
        for(j=0;j<n;j++)
            {
            scanf("%d",&matrix1[i][j]);
            }
        }
        printf("enter the rows and colume od second matrix");
        scanf("%d%d",&m,&n);
        printf("enter the elements of matrix2\n");
        for(i=0;i<m;i++)
            {
            for(j=0;j<n;j++)
                {
                scanf("%d ",&matrix2[i][j]);
                }
            }
            printf("sum of entered matrices\n");
            for(i=0;i<m;i++)

            {
              for(j=0;j<n;j++)
              {
                sum[i][j]=matrix1[i][j]+matrix2[i][j];
                printf("%d %d %d",matrix1[i][j],matrix2[i][j],sum[i][j]);
                }
                printf("\n");
                }
    return 0;
}
