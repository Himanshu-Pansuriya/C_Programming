//Return the maximum of three floating-point numbers.
#include<stdio.h>
float point(float a,float b,float c);
int main(){
	float a,b,c,max;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	max=point(a,b,c);
	printf("\n %f",max);
	return 0;
}
float point(float a,float b,float c){
	float max;
	max=(a>b)?(a>c?a:c):(b>c?b:c);
	return max;
}

