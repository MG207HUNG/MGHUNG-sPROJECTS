#include <stdio.h>
int main(){
	char c1 , c2 ;
	scanf("%c", &c1);// Van con ky tu enter
	// chung ta xoa bo dem ban phim
	fflush(stdin);
	scanf("%c", &c2);
	printf("%c %c" ,c1 ,c2);
	return 0;
}