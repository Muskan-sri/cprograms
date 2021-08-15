/*wap to input n numbers and and copy it by adding one to each*/
/*muskan kumari c2 08*/
#include<stdio.h>
int main()
{
   int n,i,copied[100],numbers[100];
   printf("input n :");
   scanf("%d",&n);
   printf("enter the numbers :\n");
      for(i=0;i<n;i++)
        {
      scanf("%d",&numbers[i]);
        }
      for(i=0;i<n;i++)
        {
       copied[i]=numbers[i]+1;
       printf("copied[%d]=%d\n",i,copied[i]);
         }

return 0;

    }
