#include <stdio.h>
int main()
{
    int n1, n2, result  = 0;
    printf("enter two numbers n1,n2:");
    scanf("%d%d",&n1,&n2);
    while(n2!=0){
        result = result + n1;
        n2--;
    }
    printf("multiplication of two numbers is:%d:",result);
   return 0;
}