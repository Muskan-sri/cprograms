/*wap that will input n numbers calculate the sum of all even numbers and all odd numbers */
/*muskan kumari c2 08*/
#include<stdio.h>
int main()
{
   int i,n,evensum=0,oddsum=0,numbers[50];
   printf("input n :");
   scanf("%d",&n);
   printf("enter the numbers :\n");
   for(i=0;i<n;i++)
   {
      scanf("%d",&numbers[i]);
      }

    for(i=0;i<n;i++)
    {
       if(numbers[i]%2==0)
       {
       evensum=evensum+numbers[i];
       }
       else
       oddsum=oddsum+numbers[i];

         }
         if(evensum>oddsum)
              printf("sum of even number is larger %d",evensum);
         else if(evensum<oddsum)
              printf(" sum f odd number is larger %d", oddsum);
         else
         printf("the larger sum  of even nd odd is %d",evensum);

         return 0;

         }
