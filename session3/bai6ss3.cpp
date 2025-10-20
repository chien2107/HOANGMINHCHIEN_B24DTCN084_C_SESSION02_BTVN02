#include <stdio.h>
int main() {
	float canhDay , chieuCao;
	printf("moi ban nhap vao canh day :");
	scanf("%f",&canhDay);
	printf("moi ban nhap vao chieu cao :");
	scanf("%f",&chieuCao);
	float dienTich = (chieuCao * canhDay)/2;
	printf("dien tich hinh tam giac la : %.2f",dienTich);	
    return 0;
}

