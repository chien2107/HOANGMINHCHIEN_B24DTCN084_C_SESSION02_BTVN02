#include <stdio.h>
int main() {
	float diemTrungBinh;
	printf("Nhap diem : ");
	scanf("%f",&diemTrungBinh);
	if(diemTrungBinh >= 8){
		printf("hoc luc gioi");
	}else if(diemTrungBinh >= 6.5){
		printf("hoc luc kha");
	}else if(diemTrungBinh >= 5){
		printf("hoc luc trung binh");
	}else{
		printf("hoc luc yeu");
	}
    return 0;
}

