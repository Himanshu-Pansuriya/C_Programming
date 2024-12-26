//Store n elements in an array and print the elements using pointer.
#include<stdio.h>
int main(){
	int n;
	int a[n],i,*p;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
	scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++){
	p=&a[i];
	printf(" \n element is %d",*p);
	}
}
