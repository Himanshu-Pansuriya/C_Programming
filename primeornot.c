#include<stdio.h>
int main()
{
	int  i=2 ,n ,count=0;
	printf("enter a number:");
	scanf("%d",&n);
	
	while(i<n){
		if(n%i==0){
			count++;
		if(count==1){
			break;
		}
		}
		else{
			count==0;
		}
		i++;
	}
	if(count==0){	
	printf("prime");
	}
	else{
		printf("not prime");
	}
}
