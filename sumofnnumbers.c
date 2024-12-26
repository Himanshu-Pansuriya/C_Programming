#include<stdio.h>
int main(){
	int i,k,sum=0,n;
  printf("enter a number :");
  scanf("%d",&n);
  
  k=n;
  for(i=1;i<=n;i++){
  	 sum=sum+k*i;
  	 k--;
  }	
   printf("%d",sum);
}
