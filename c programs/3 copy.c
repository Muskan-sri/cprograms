
/*write a program a progran that will copy one string to other string an display */
/*C2 muskan kumari 08*/
#include<stdio.h>
int main ()
{


   char location1[20],location2[20];
   int i=0;
   printf("enter the your location1:");
   scanf("%[^\n]",location1);
   printf("enter the your location2:");
   scanf(" %[^\n]",location2);

        for(i=0;location1[i]!='\0';i++)
           location2[i]=location2[i];
     printf( "\n the given location is %s",location1);
     printf("\nthe copied location is %s", location2);
     return 0;
     }
