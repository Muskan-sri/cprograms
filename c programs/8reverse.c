/*write a program to reverse a string*/
/*muskan kumari c2 08*/
#include<stdio.h>
int main ()

{
      char str1[50],str2[50];
      int i=0,j=0;
      scanf("%[^\n]",str1);
      while(str1[i]!='\0')
      {
         i++;
      }

      while(i>=0)
      {i--;
          str2[j]=str1[i];

          j++;
      }
      str2[j+1]='\0';
      printf("the reverse of the string is %s",str2);
      return 0;

}
