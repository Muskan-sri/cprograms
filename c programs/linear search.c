/*write a program to search an arrayby using linear search */
/*muskan kumari c2 08*/

#include<stdio.h>
int main()
{
    int i,n,arr[100],key,flag=0;
    printf("Enter the size of array : ");
    scanf("%d",&n);
     printf(" enter the element :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the elements want to search : ");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
        printf("key is find in the index of %d array",i);
        flag=1;
        break;
        }
    }
    if(flag==0)
        printf("key is not find in array");
    return 0;
}

