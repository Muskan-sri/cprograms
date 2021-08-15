/* writ a program to print a 2d array in matrix format*/
/* muskan kumari c2 08*/
#include<stdio.h>
int main()
{
    int i,j,nr,nc,arr[100][100];
    printf("Enter the no of row: ");
    scanf("%d",&nr);
    printf("Enter the no of coloumn: ");
    scanf("%d",&nc);
    printf("Enter the element of array : ");
    for(i=0;i<nr;i++)
        {
        for(j=0;j<nc;j++)
            {
            scanf("%d",&arr[i][j]);
            }
        }
        for(i=0;i<nr;i++)
            {
            for(j=0;j<nc;j++)
                {
                printf("%d ",arr[i][j]);
                }
            printf("\n");
            }
    return 0;
}
