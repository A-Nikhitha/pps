#include <stdio.h>
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    printf("number by excluding last two digits is:%d",num/100);
   return 0;
}