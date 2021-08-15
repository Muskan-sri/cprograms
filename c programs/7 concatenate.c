/*write a program to concatinate two string*/
/*muskan kumari c2 08*/
#include <stdio.h>
int main()
    {
        char str1[50],str2[50];
        int len=0,i;
        printf("Enter the string : ");
        scanf(" %[^\n]", str1);
        printf("Enter the string : ");
        scanf(" %[^\n]", str2);
        while (str1[len]!= '\0')
            len++;
        for(i=0;str2[i]!='\0';i++)
            {
              str1[len]=str2[i];
              len++;
            }
        printf("%s",str1);
        return 0;
    }

