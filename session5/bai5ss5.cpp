#include <stdio.h>
int main() {
	int age ;
	const float giaVe = 20.000;
	float soTien;
	printf("Nhap so tuoi : ");
	scanf("%d",&age);
	if(age <= 0){
		printf("so tuoi ko hop le");
	}else if(age < 6){
		printf("Mien phi");
	}else if(age >= 6 && age <= 18){
		soTien = giaVe * 50 / 100;
		printf("so tien ve la : %.3f VND",soTien);
	}else if(age >= 19 && age <= 60){
		printf("so tien ve la %.3f VND",giaVe);
	}else{
		soTien = giaVe * 70 / 100;
		printf("so tien ve la : %.3f VND",soTien);
	}	
    return 0;
}

