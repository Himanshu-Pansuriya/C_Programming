#include<stdio.h>
void main(){
    char s1[10],s2[10];
	printf("enter string : 1");
	gets(s1);
	printf("enter string : 2");
	gets(s2);
	printf(strstr(s1,'c'));
}
