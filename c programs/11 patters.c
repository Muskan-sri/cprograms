#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, l, len1, len2,count = 0, count_1 = 0;
    char str[100], patt[100];

    printf("Enter the string: ");
    scanf("%[^\n]", str);
    printf("Enter the pattern: ");
    scanf(" %[^\n]", patt);

    while(str[i]!='\0')
        i++;
    len1=i;

    i=0;
    while(patt[i]!='\0')
        i++;
    len2=i;
    str[len1]=" ";
    for (i=0; i < len1;)
    {
        j=0;
        count=0;
        while ((str[i] == patt[j]))
        {
            count++;
            i++;
            j++;
        }
        if (count == len2)
        {
            count_1++;
            count = 0;
        }
        else
            i++;
    }
    printf("The pattern is repeated %d times",count_1);
    return 0;
}
