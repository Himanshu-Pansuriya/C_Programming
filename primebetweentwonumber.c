#include <stdio.h>

void main()
{
int a, b, n, i, j, flag = 0;
printf("Enter value of a and b (a < b): ");
scanf("%d%d", &a, &b);
if (b < a || b < 2)
{
printf("\nSorry, there are no primes for the given range.\n");
exit(0);
}
for (i = a; i <= b; i++)
{
flag = 0;
for (j = 2; j < i; j++)
{
if (i % j == 0)
{
flag++;
break;
}
}
if (flag == 0)
printf("%d ", i);
}
printf("\n");
}
