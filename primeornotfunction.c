#include<stdio.h>
int primeornot(int n);
int main(){
	int n,a;
	printf("enter number :");
	scanf("%d",&n);
    a=primeornot(n);
	if(a==1){
			printf("number is prime");
	}
	else{
		printf("number is not prime");
	}
}
int primeornot(int n){
	int i,count;
	for(i=2;i<n/2;i++){
		if(n%i==0){
			count=count+1;
		}
		else{
			count=0;
		}
	}
	if(count=0){
		return 1;
	}
	else{
		return 0;
	}

}
