#include <math.h>
#include <stdio.h>
int main (){
	float x = 0.0;
	float y = 0.0;
	char pheptinh = '\0';
	float ketqua = '\0' ;
	printf("nhap x : ");
	scanf("%f", &x);
	printf("nhap y : ");
	scanf("%f", &y);
	printf("nhap phep tinh : ");
	scanf(" %c" ,&pheptinh);
	switch (pheptinh){
		case '+' :
			ketqua = x + y ;
			break ;
		case '-' :
			ketqua = x - y ;
			break ;
		case '*' :
			ketqua = x * y ;
			break ;
		case '/' :
			if(y==0){
				printf("mau phai khac 0 \n");
				return 0;
			}
			else{
			ketqua = x / y ;
			}
			break;
		default :
			printf("vui long nhap + - x /");
			return 0;
			break;
	}
	printf("ket qua phep tinh la : %f", ketqua);
	
	
	
}