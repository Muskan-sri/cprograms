/* write a program to insert an element in the array of n numbers */
/* muskan kumari c2 08 */
#include <stdio.h>

int main()
{
    int array[50],pos,i,n,key;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter the position of the element: ");
    scanf("%d",&pos);
    printf("Enter the element: ");
       scanf("%d",&key);
    for (i =n-1;i>= pos;i--)
    {
        array[i+1]=array[i];
    }
    array[pos]=key;
    n++;
    for (i=0;i<n;i++)
        printf("%d ", array[i]);
    return 0;
}

