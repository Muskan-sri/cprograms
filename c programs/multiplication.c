#include<stdio.h>
int main()
    {
    int i,j,k,nr1,nr2,nc1,nc2,a[50][50],b[50][50],mul[50][50];
    printf("Enter the no of row and column of first matrix: ");
    scanf("%d%d",&nr1,&nc1);
    printf("Enter the no of row and column of second matrix: ");
    scanf("%d%d",&nr2,&nc2);
    if(nc1=nc2)
    {

        printf("multiplication is invalid");
    }
    else
        {
        printf("enter the elements of matrix a:\n");


    for(i=0;i<nr1;i++)
        {
        for(j=0;j<nc1;j++)
            {
            scanf("%d",&a[i][j]);
            }
        }


        printf("enter the elements of matrix b:\n");

        for(i=0;i<nr2;i++)
            {
            for(j=0;j<nc2;j++)

                    scanf("%d ",&b[i][j]);

          }
        for(i=0;i<nr1;i++)
        {

              for(j=0;j<nc2;j++)
              {
                  mul[i][j]=0;
                  for(k=0;k<nc2;k++)
                  {
                      mul[i][j]=mul[i][j]+a[i][j]+b[i][j];

                  }
              }
        }
        printf("the product is ");
        for(i=0;i<nr1;i++)
        {
            printf("\n");
            for(j=0;j<nc2;j++)
            printf("%d\t",mul[i][j]);
        }
        }
    return 0;
    }
