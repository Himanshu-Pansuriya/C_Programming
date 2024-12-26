#include<stdio.h>
int main(){
	
	int a=0,b=0,n;
	printf("enter the value of n");
	scanf("%d",&n);
	while(a<=n){
		if(n%a==0){
	
		b=1;
		break;
	}
	a=a+1;
  }
     if(b==0){
     	printf("prime");
	 }
	 else{
	 	printf("not prime");
	 }
}
