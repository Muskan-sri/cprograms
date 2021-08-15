/*write a program to find the length of string*/
/*C2 08 muskan kumari*/
#include<stdio.h>
int main ()
{
  char name[20];
  int i=0;
  printf(" enter your name :");
  scanf("%[^\n]",name);
  while(name[i]!='\0')
  i++;
  printf("\n length of string is :%d",i);
  return 0;

    }
