#include<stdio.h>
int main() {
       char id[10];
       int hour;
       double value, salary;
       printf("Input the Employee ID(Max.10 chars: ");
       scanf("%s",&id);
       printf("\nInput the working hrs: ");
       scanf("%d", &hour);
       printf("\nSalary amount/hr: ");
       scanf("%If", &value);
       salary = value * hour;
       printf("\nEmployees ID = %s\nSalary = U$ %.21f\n", id,salary);
       return 0;
}
        

    
    
    
    
    