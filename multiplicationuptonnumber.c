#include <stdio.h>
void main()
{
int n;
int i, j, m = 1;
printf("Enter n: ");
scanf("%d", &n);
for (i = 1; i <= n; i++)
{
for (j = 1; j <= n; j++)
{
m = i * j;
printf("%5d", m);
}
printf("\n");
if (i == 1)
printf("---------------------------------------------------\n");
}
}
