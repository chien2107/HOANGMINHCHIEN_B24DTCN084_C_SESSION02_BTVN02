#include <stdio.h>
int main() {
	float a , b , c ;
	printf("moi ban nhap diem Toan :");
	scanf("%f",&a);
	printf("moi ban nhap diem Van :");
	scanf("%f",&b);
	printf("moi ban nhap diem Anh :");
	scanf("%f",&c);
	float tong = a + b + c;
	float trungBinh = tong / 3;
	printf("Tong la : %.2f\n",tong);
	printf("Diem trung binh la : %.2f",trungBinh);
    return 0;
}
