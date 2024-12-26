//find minimum,maximum,avg of given number from an array.
#include<stdio.h>
int main(){
	int num[100],n,i,sum=0,cont=0,min,max;
	float avg;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){

	printf("enter an array:");
	scanf("%d",&num[i]);
}
    max=num[1];
    min=num[1];
    
  	for(i=1;i<=n;i++){
	sum=sum+num[i];
	cont++;
	
	if(num[i]>max){
		max=num[i];
	}
	if(num[i]<min){
	min=num[i];
	}
}
	avg=(sum)/cont;
	printf("%f",avg);
	printf("\n %d",max);
	printf("\n %d",min);
}
