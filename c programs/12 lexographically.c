#include <stdio.h>
#include <string.h>
int main()
    {
        char str[10][50],a[50];
        int i,j,n;
        printf("Enter how many strings u want to input ");
        scanf("%d",&n);
        printf("Enter the string :\t");
        for (int i = 0; i < n; i++)
            {
                scanf(" %[^\n]", str[i]);
            }
        for(i=0;i<n;i++)
            {
                for (j = 0;j<n-i-1;j++)
                    {
                        if(strcmp(str[j],str[j+1])>0)
                         {
                            strcpy(a, str[j]);
                            strcpy(str[j], str[j+1]);
                            strcpy(str[j+1], a);
                        }

                    }
            }
        for (i = 0; i < n; i++)
            {
                printf("\n%s",str[i]);
            }
            return 0;
    }
