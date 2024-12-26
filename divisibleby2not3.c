#include<stdio.h>
int main(){
	int n,a;
	printf("enter number:");
	scanf("%d %d",&n,&a);
	
	for(;n<=a;n++){
		
		if(n%2==0 && n%3!=0){
			printf("\n %d",n);
		}
	}
}

