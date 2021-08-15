/*WRITE A PROGRAM TO COUNT THE NUMBER OF VOWELS CONSONANTS AND OTER CHARACTER IN A STRING INPUTTED BY THE USER*/
/*MUSKAN KUMARI C2 08*/


#include <stdio.h>
int main()
    {
        char str1[50];
        int c=0,len=0,i,v=0,oc;
        printf("Enter the string : ");
        scanf(" %[^\n]", str1);
        while (str1[len] != '\0')
           len++;
        for(i=0;i<len;i++)
            {
                if(str1[i]=='a'|| str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u')
                    {
                        v++;
                    }
                else if(str1[i]>='a'&&str1[i]<='z'||str1[i]>='A'&&str1[i]<='Z')
                    {
                        c++;
                    }
            }
         oc=len-(v+c);
         printf("The No of vowels are :%d\n",v);
         printf("The No of consonants are :%d\n",c);
         printf("The no of other characters are %d",oc );
         return 0;
    }
