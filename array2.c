//read n number from user and print them in normal and reverse order.
#include<stdio.h>
int main(){
	int num[100],n,i;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	printf("enter an array:");
	scanf("%d",&num[i]);
}
	for(i=1;i<=n;i++){
	printf("\n %d element is %d",i,num[i]);
}
	for(i=n;i>0;i--){
	printf("\n %d element is %d",i,num[i]);
}

}



