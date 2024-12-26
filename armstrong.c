#include <stdio.h>
void main()
{
int n, i, t;
int r, sum = 0;
printf("Enter a number: ");
scanf("%d", &n);
t = n;
while (n != 0)
{
r = n % 10;
sum += r * r * r;
n /= 10;
}
if (sum == t)
printf("\n%d is an armstrong.\n", t);
else
printf("\n%d is not an armstrong.\n", t);
}

