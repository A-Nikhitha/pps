#include <stdio.h>
int main()
{
    int X;
    float y;
    printf("Input total distance in km: ");
    scanf("%d",&X);
    printf("Input total fuel spent in liters: ");
    scanf("%f", &y);
    printf("Average consumption(km/lt) %.3f ",X/y);
    printf("\n");
    return 0;
}
 

    
    
    
    
    