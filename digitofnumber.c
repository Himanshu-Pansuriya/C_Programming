#include <stdio.h>
void main()
{
int n, i;
    printf("Enter a number: ");
     scanf("%d", &n);
      while (n != 0)
{
       i = n % 10;
       printf("%d", i);
       n /= 10;
        if (n == 0)
       break;
        else
         printf(", ");
       }
               printf("\n");
}
