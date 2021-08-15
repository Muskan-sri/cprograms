/*write a program to read a sentence and count the number of words in the sentence*/
/*MUSKAN KUMARIC2 08*/
#include<stdio.h>
int main()
{
         char str[50];
         int i=0,words=1;
         scanf("%[^\n]",str);
         while(str[i]!='\0')
          {
             i++;
                if(str[i]==' ' &&str[i+1]!=' ')
                    words++;
            }
         printf("\n numbr of words  is %d",words);
         return 0;

}


