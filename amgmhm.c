//Write a program to calculate the average, geometric and harmonic mean of n elements in an array.
#include <stdio.h>
#include <math.h>
int main()
{
int i, op, n;
float sum = 0, am, hm, gm, arr[100];
printf("\nHow array size: ");
scanf(" %d", &n);
for (i = 0; i < n; i++)
{
printf("\nEnter %d th number: ", i);
scanf(" %f", &arr[i]);
}
do
{
printf("\n1. Arihmetic Mean");
printf("\n2. Harmonic Mean");
printf("\n3. Geometric Mean\n");
printf("\nWhich operation do you want to perform? ");
scanf(" %d", &op);
switch (op)
{
case 1:
for (i = 0; i < n; i++)
{
sum += arr[i];
}
am = sum / n;
printf("\nArithmetic Mean: %f\n", am);
break;
case 2:
for (i = 0; i < n; i++)
{
sum += (1 / arr[i]);
}
hm = n / sum;
printf("\nHarmonic Mean: %f\n", hm);
break;
case 3:
sum = 1;
for (i = 0; i < n; i++)
{
sum *= arr[i];
}
gm = pow(sum, (float)1 / n);
printf("\nGeometric Mean: %f\n", gm);
break;
}
} while (op != 4);
}

