//Add two matrix using pointers.

#include<stdio.h>
int main(){
	int m,n,j,i;
    int a[m][n],b[m][n];
    printf("enter element :");
    scanf("%d %d",&m,&n);
    
    for(i=0;i<m;i++){
       for(j=0;j<n;j++){
    printf("enter 1 element :");
    scanf(" \n %d",&a[i][j]);
    printf("enter 2 element :");
    scanf(" \n %d",&b[i][j]);
      }
    }
     for(i=0;i<m;i++){
       for(j=0;j<n;j++){
    printf("  |%d|",a[i+1][j+1]);
    
}}   for(i=0;i<m;i++){
       for(j=0;j<n;j++){
    printf("  |%d|",b[i+1][j+1]);
    
}}
}
      


