/*write a program to sdearch an array by using biary search */
/* muskan kumari c2 08*/
#include<stdio.h>
int main()
{
    int i,n,l=0,h,mid=0,key, arr[10];
    printf("Enter the array size : ");
    scanf("%d",&n);
    printf("Enter the element: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("ennter the key : ");
    scanf("%d",&key);
    h=n-1;
        while(l<=h)
            {
            mid=(l+h)/2;
            if(arr[mid]<key)
                l=mid+1;
            else if(arr[mid]==key)
                {
                printf("%d Key is found in the %d index of this array",key,mid);
                break;
                }
            else
               {
                h=mid-1;
               }
        }
        if(l>h)
        printf("%d key is not find in this array",key);
        return 0;
}

