#include <stdio.h>

int main()
{
int n;
int i, j ,m=1;
printf("Enter value of n:");
scanf("%d",&n);

for(i=1;i<=n;i++){
	for(j=1;j<=10;j++){
		
		m=j*i;
		printf("\n %d*%d=%d",i,j,m);
	}
	printf("\n");
}
}
