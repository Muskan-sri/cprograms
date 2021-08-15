 /*write a program that will input n numbers and display min nad max */
/*muskan kumari c2 08*/
#include<stdio.h>
int main()
{
   int i,n,min,max,numbers[50];
   printf("input n :");
   scanf("%d",&n);
   printf("enter the numbers :\n");
   for(i=0;i<n;i++)
   {
      scanf("%d",&numbers[i]);
      }
    min=numbers[0];

        for(i=0;i<n;i++)
    {
       if(min>numbers[i])
       {
       min=numbers[i];
       }
       if(max<numbers[i])
       {
         max=numbers[i];
         }
         }
         printf("the min number is %d\n",min);
         printf("the max numbere is %d",max);
         return 0;

         }
