#include <stdio.h>
#include <math.h>
int main()
{
    int num, cube;
    printf("enter a number:");
    scanf("%d",&num);
    cube = pow(num,3);
    printf("the cube of a given num is:%d",cube);
    printf("\ncube of number is: %d",num*num*num);   
   return 0;
}