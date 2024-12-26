#include<stdio.h>
#define r 3
#define c 3
int main()
{
	int i,j,sum=0,num[r][c];
   
    for(i=0;i<r;i++){
      for(j=0;j<c;j++){
      printf("enter an element:");
      scanf("%d",&num[i][j]);
  }
  }
   for(i=0;i<r;i++){
   	sum=0;
      for(j=0;j<c;j++){
    printf("%d ",num[i][j]);
  }
    printf("\n");
  }
  for(i=0;i<r;i++){
  	sum=0;
      for(j=0;j<c;j++){
      	sum=sum+num[i][j];
	  }
	  printf("for row %d sum is %d \n",i,sum);
	  }
 for(j=0;j<r;j++){
 	 sum=0;
      for(i=0;i<c;i++){
      	sum=sum+num[i][j];
	  }
	  printf("for column %d sum is %d \n",i ,sum);
	  }
}

