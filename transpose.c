//transpose of matrix
#include<stdio.h>

int main(){
	int i,j;
	int a[3][3];
	int b[3][3];
	
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
		printf("\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			a[i][j]=b[j][i];
			printf(" %d ",b[i][j]);  
		}
			printf("\n");
	}
}

