#include<stdio.h>
int main(){
	
	int a=0,sum=0;
	while(a<10){
		a=a+1;
		if(a==5||a==7||a==9){
			continue;
		}
		printf("\n%d",a);
		sum=sum+a;
	}
	printf("\n%d",sum);
}
