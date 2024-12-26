/*Write a program to calculate sum of elements of an array using pointer*/
#include <stdio.h>
#define N 100
int sum(int *, int);
void main()
{
int n, arr[N], csum = 0;
int i, *p;
printf("Enter size of an array: ");
scanf("%d", &n);
for (i = 0; i < n; i++){
printf("Enter arr[%d]: ", i);
scanf("%d", &arr[i]);
}
printf("\nElements of an array are: \n");
for (i = 0; i < n; i++){
printf("%d, ", arr[i]);
}
printf("\n");
p = arr;
csum = sum(p, n);
printf("\n\n Sum of the elements of an array is: %d\n\n",csum);
}
int sum(int *p, int n){
int i,csum = 0;
for (i = 0; i < n; i++)
{
csum += *p;
p++;
}
return csum;
}
