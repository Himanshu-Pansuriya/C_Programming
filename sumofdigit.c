#include<stdio.h>
int main(){
	
	int sum=0,i,j,n;
	printf("enter a number:");
	scanf("%d",&n);
	
	for(i=1;n>=10;i++){
		j=n%10;
		sum=sum+j;
		n=n/10;
		if(n<10){
		sum=sum+n;
	}
	}
	printf("%d",sum);
}
