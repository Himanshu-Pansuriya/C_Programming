#include<stdio.h>
int gcd(int a,int b);
int main(){
  int a,b,*t;
  printf("ewnter two numbers : ");
  scanf("%d %d",&a,&b);
  t=gcd(a,b);
  printf("\n%d",*t);
   	
}
int gcd(int a,int b){
	int i,*t;
		for(i=1;i<a/2;i++){
			if(b%i==0 && a%i==0){
				*t=i;
			}
			
		}
}
	

