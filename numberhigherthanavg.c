//Count numbers higher than the average of an array.
#include<stdio.h>
int main(){
	int n,i,avg,sum=0,count=0;
	int a[n];
	printf("how many numbers that you want to enter :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
     printf("enter a number :");
     scanf("%d",&a[i]);
 }
     	for(i=0;i<n;i++){
      	  sum+=a[i];
}
   avg=(float)sum/n;
   
   for(i=0;i<n;i++){
   	if(a[i]>avg){
   		count++;
	   }
   }
   printf(" \n total numbers which are greater than avearge is %d",count);
   return 0;
}
