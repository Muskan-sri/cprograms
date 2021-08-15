/*write a program to check a given string is a pallindrome or not*/
/*muskan kumari c 08*/
#include <stdio.h>
int main()
{
     char str[50];int i,len=0,mid,b,e;
     printf("Enter the string :\t");
     scanf(" %[^\n]", str);
     //gets(str1);
      while (str[len] != '\0')
           len++;
     mid=len/2;
     b=0;e=len-1;
     while (b<mid)
     {
          if(str[b]!=str[e])
          {
               printf("%s is not a palindrome",str);
               break;
          }
          b=b+1;
          e=e-1;
          printf("%s is a palindrome",str);
     }
}
