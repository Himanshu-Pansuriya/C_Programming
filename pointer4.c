//Copy one array to another using pointers.
#include<stdio.h>
int main(){
	int n,m,i,*p;
	scanf("%d",&n);
	scanf("%d",&m);
	int a[n],b[m+n];
	
	for(i=1;i<=n;i++){
	scanf("%d",&a[i]);
		scanf("%d",&b[i]);
	}
	for(i=1;i<=n;i++){
	p=&a[i];
	printf(" \n element without copy %d",b[i]);
	}
	for(i=1;i<=m;i++){
		
		*p=b[m+i];
		printf("  \n element with copy  ans is %d",*p);
	}
}
