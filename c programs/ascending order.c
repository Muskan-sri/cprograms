/*write a program to sort an array  in asvending order */
/* muskan kumkari c2 08*/

#include<stdio.h>
int main()
{
    int i, n, j, min, t, num[50];
    printf("Enter value of n : \n");
    scanf("%d",&n);
    printf("Enter the numbers : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(num[j]<num[min])
                min=j;
        }
        if(min!=j)
        {
            t=num[i];
            num[i]=num[min];
            num[min]=t;
        }
    }
    printf("The numbers in ascending order are : \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",num[i]);
    }
    return 0;
}
