#include <stdio.h>
int main() {
	float a , b;
	float x;
	printf("moi ban nhap so thu nhat : ");
	scanf("%f",&a);
	printf("moi ban nhap so thu hai : ");
	scanf("%f",&b);
	if(a == 0 && b == 0){
		printf("phuong trinh co vo so nghiem");
	}else if(a == 0 && b != 0){
		printf("phuong trinh vo nghiem");
	}else{
		x = -b / a;
		printf("phuong trinh co nghiem x = %.2f", x);
	}
    return 0;
}

