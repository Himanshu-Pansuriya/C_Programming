#include<stdio.h>
int simpleinterest(int p,int r,int n, float interest);
int main(){
	int p,r,n;
	float interest;
	printf("enter value:");
	scanf("%d",&p);
	printf("enter rate of interest:");
	scanf("%d",&r);
	printf("enter year:");
	scanf("%d",&n);
	interest=simpleinterest(p,r,n,interest);
	printf("\n %f",interest);
	return 0;
}
int simpleinterest(int p,int r,int n, float interest){
	 interest=(float)p*r*n/100;
	 return interest;
}

