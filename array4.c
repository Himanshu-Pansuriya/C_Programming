//count number of even or odd number from an array of n number.
#include<stdio.h>
int main(){
	int num[100],n,i,even=0,odd=0;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	printf("enter an array:");
	scanf("%d",&num[i]);
}
	for(i=1;i<=n;i++){
		if(num[i]%2==0){
	        even++;
		}
		else{
			odd++;
		}	
}
     printf("\n even= %d",even);
     printf("\n"); 
     printf("\n odd= %d",odd);
}
