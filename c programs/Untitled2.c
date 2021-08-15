#include<stdio.h>
int main()
{
    int a[5] ={5,1,15,20,25};
    int i,j,m;
    i=++a[1];
    j=a[1]++;
    m=a[i++];
    printf("%d,%d,%d",i,j,m);

    //for(i=0;i<5;i++){
      //  a[i++]=++j;

    //}
    //for(i=0;i<5;i++)
      //  printf('5d\t',a[i]);

    return 0;

}
