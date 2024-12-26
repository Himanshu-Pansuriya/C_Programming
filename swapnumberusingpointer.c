#include<stdio.h>
int swap(int*,int*);
int main(){
	int a,b,temp;
	temp=swap(&a,&b);
	print("%d %d",a,b);
}
int swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
