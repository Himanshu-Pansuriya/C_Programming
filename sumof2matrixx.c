#include<stdio.h>

int main(){
	int i,j;
	int a[3][3];
	int b[3][3];
	int c[3][3];
	
	//for matrix 1
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("enter value :");
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf(" %d ",a[i][j]);
		}
		printf("\n");
	}
	//for matrix 2
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("enter value :");
			scanf("%d",&b[i][j]);
		}
			printf("\n");
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf(" %d ",b[i][j]);
		}
			printf("\n");
	}
		printf("\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[i][j]=a[i][j]+b[i][j];
			printf(" %d ",c[i][j]);
		}
			printf("\n");
	}

	return 0;
	
}
