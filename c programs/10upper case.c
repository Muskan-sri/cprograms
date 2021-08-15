#include<stdio.h>
int main ()
{

     char str[20];
     int i=0;
     printf("enter the string: ");
     gets(str);

     while(str[i]!='\0')
     {
        if(str[i]!=' ')
        {
             str[i]=str[i]+32;
        }
        i++;
     }
     printf("\n string in lower case is : %s",str);
     return 0;


      }
