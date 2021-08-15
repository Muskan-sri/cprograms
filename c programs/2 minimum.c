/*wap that will display n numbers and and input n numbers and display the min */
/*muskan kumari c2 08*/
#include<stdio.h>
int main()
{
    int n,i,arr[20],min;
    printf("enter for how many numbers you want to check min");
    scanf("%d",&n);
    printf("enter %d elements ",n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
        }
        min=arr[0];
        for(i=0;i<n;i++)
        {
           if(arr[i]<min)
           min=arr[i];
      }
     printf("the min is %d",min);
     return 0;

         }
