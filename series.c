#include<stdio.h>
int main(){
      int n,i,j;
      float e=1,m=1;
      
      printf("enter a number:");
      scanf("%d",&n);
      
      for(i=1;i<=n;i++){
      	m=1;
      	for(j=1;j<=i;j++){
		 
      	m=m*j;
	}
	m=1/m;
	e=e+m;
    }
     
    printf("%.2f",e);
}
