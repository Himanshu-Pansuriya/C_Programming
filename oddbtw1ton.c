#include<stdio.h>
int main(){
	int i=1,n;
	printf("enter number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		
		if(i%2!=0){
			printf("\n %d",i);
		}
	}
}
