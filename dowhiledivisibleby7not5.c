#include<stdio.h>
int main(){
	int i=101;
	
	do{
		if(i%7==0 && i%5!=0){
			printf(" \n number is : %d",i);
		}
		i++;
	}while(i<200);
}
