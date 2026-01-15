#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main (){
	int A = 0 ;
	int B = 0 ;
	char name[66] ;
	printf("Nhap Ten cua ban : ");
	fgets(name, sizeof(name) , stdin);
	name[strlen(name) - 1] ='\0';
	printf("A = ");
	scanf ("%d" , &A);
	getchar();
	printf("B = ");
	scanf("%d" ,&B);
	printf("%s",name);
	printf("%d\n", A);
	printf("%d\n", B);
	
	
	
	
	
	
	return 0;
}