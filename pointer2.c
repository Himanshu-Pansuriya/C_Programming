//Calculate sum of n numbers using pointer.
#include<stdio.h>
int main(){
	int n;
	int a[n],i,sum=0,*p;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
	scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++){
		p=&a[i];
		sum=sum+*p;
	}
	 printf(" \n %d",sum);
}
