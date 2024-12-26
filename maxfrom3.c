// Return the maximum of three floating-point numbers.
#include<stdio.h>
int maximum(int p,int r,int n);
int main(){
	int p,r,n,max;
	printf("enter value:");
	scanf("%d",&p);
	printf("enter value:");
	scanf("%d",&r);
	printf("enter value:");
	scanf("%d",&n);
	max=maximum(p,r,n);
	printf("\n %d",max);
	return 0;
}
int maximum(int p,int r,int n){
	int max;
    max=p>r?(p>n?p:n):(r>n?r:n);
	 return max;
}
