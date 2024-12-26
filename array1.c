//develop a program to sum of n array elements in c.
#include<stdio.h>
int main(){
	int num[100],n,i,sum=0;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){

	printf("enter an array:");
	scanf("%d",&num[i]);
}
	for(i=1;i<=n;i++){
	sum=sum+num[i];
}
	printf("\n sum=%d",sum);
}




