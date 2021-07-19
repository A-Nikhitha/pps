#include <stdio.h>
#include <string.h>
int main()
{
        char w1[20],w2[20];
        int n, res;
        printf("\nenter the w1:");
        gets(w1);
        printf("\nenter the w2:");
        gets(w2);
        printf("\nenter the number:");
        scanf("%d",&n);
        res = strncmp(w1,w2,n);
        printf("w1 after contatenation:%d",res);
}
        
        
  
      
        