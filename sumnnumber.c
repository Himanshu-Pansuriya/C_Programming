#include<stdio.h>
int main(){
      int n,i,j;
      int sum=0;
      
      printf("enter a number:");
      scanf("%d",&n);
      
      for(i=1;i<=n;i++){
      	for(j=1;j<=i;j++){
		  
      	sum=sum+j;
      	
	    }
    }
    printf("%d",sum);
}
