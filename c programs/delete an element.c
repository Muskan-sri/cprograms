/*  write a program to delete an element form an array */
/* muskamn kumari c2 08*/

#include <stdio.h>

int main()
{
    int array[50],pos,i,n,key;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for (i=0;i<n;i++)
        scanf("%d",&array[i]);
    printf("Enter the position of the element: ");
    scanf("%d",&pos);
    key=array[pos];
    if(pos>n)
        printf(" input number is not valid");
    else
    {
        for(i=pos;i<n;i++)
        {
        array[i] = array[i+1];
        }
    n--;

    for(i = 0; i<n; i++)
        printf("%d ", array[i]);
    }
    return 0;
}
