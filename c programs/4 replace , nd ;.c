/*write a program that will enter a text having commoas and replace the commas with semicolons */
/*c2 08 muskan kumari */
#include<stdio.h>
int main ()
{
  char str[100];
  int i=0;
  printf("enter the sentence ");
  scanf("%[^\n]",str);
  for(i=0;str[i]!=0;i++)
  {
  if(str[i]==',')
  {
  str[i]=';';
  }
  }
  printf("%s",str);
  return 0;

}
