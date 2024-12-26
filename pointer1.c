//Print value and address of a variable.
#include<stdio.h>
int main(){
	int a=5,*p;
	p=&a;
	 printf(" \n %d",a);
	 printf(" \n %d",p);
	 printf(" \n %d",*p);
}
