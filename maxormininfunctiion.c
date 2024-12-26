#include<stdio.h>
int maximum(int a,int b);
int minimum(int a,int b);
int main(){
	int a,b,max,min;
	printf("enter numbers:");
	scanf("%d %d",&a,&b);
	max=maximum(a,b);
	min=minimum(a,b);
	printf("\n max number %d",max);
	printf("\n min number %d",min);
}
int maximum(int a,int b){

		return (a>b)?a:b;
	
}
int minimum(int a,int b){
	
		return (a>b)?b:a;
	
}
