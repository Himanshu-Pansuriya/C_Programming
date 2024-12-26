//count number of positive or negative number from an array of n number.
#include<stdio.h>
int main(){
	int num[100],n,i,pos=0,neg=0;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	printf("enter an array:");
	scanf("%d",&num[i]);
}
	for(i=1;i<=n;i++){
		if(num[i]>=0){
	    pos++;
		}
		else{
			neg++;
		}	
}
     printf("\n positive= %d",pos);
     printf("\n"); 
     printf("\n negative= %d",neg);
}
