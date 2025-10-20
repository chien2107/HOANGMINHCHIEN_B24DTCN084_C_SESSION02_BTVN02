#include <stdio.h>
int main() {
	float Pi = 3.14;
	float r;
	printf("moi ban nhap vao ban kinh : ");
	scanf("%f",&r);
	float chuVi = r * 2 * Pi;
	float dienTich = r * r * Pi;
	printf("chu vi hinh tron la : %.2f \n",chuVi);
	printf("dien tich hinh tron la : %.2f",dienTich);	
    return 0;
}

