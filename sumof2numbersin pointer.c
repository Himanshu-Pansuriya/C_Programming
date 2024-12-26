//Calculate sum of n numbers using pointer.
#include<stdio.h>
int main(){
	int sum=0,n,a,*p,i;
   printf("enter a number :");
   scanf("%d",&n);
    for(i=1;i<=n;i++){
    	 printf("enter a number :");
         scanf("%d",&a);
}
     for(i=1;i<=n;i++){
         p=&a;
         sum += *p;
}
      printf("%d",sum);

}

