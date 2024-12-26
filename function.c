#include<stdio.h>
int add(int a,int b);

int main(){
	int a=5,b=6;
	printf("enter a number 1 :");
	scanf("%d",&a);
	printf("enter a number 2 :");
	scanf("%d",&b);
	add(a,b);
	
}
int add(int a,int b){
	printf("%d",a+b);
}               
