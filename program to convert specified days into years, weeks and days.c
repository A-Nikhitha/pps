#include <stdio.h>
int main() 
{
    int days, years, weeks;
    years = days/365;
    weeks = (days % 365)/7;
    days = days - ((years*365) + (weeks*7));
    printf("years: %d\n", years);
    printf("weeks: %d\n", weeks);
    printf("Days: %d \n", days);
    return 0;
}
    