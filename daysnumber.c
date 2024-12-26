#include<stdio.h>
int main(){
	int n;
	printf("enter a number(between 00 to 100):");
	scanf("&d",&n);
	
	if( n >=80){
		printf("Distinction");
	}
	else if( n >=60){
		printf("First claas");
	}
	else if( n >=40){
		printf("second class");
	}
	else if( n < 40){
	    printf("Fail");
    }
   
}
