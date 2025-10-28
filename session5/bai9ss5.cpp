#include <stdio.h>
int main() {
	float luong , phuCap, heSoLuong;
	int day , chucVu;
	printf("moi ban nhap he so luong :");
	scanf("%f",&heSoLuong);
	printf("moi ban nhap so ngay : ");
	scanf("%d",&day);
	printf("moi ban nhap chuc vu :");
	scanf("%d",&chucVu);
	if(chucVu = 1){
		phuCap = 500000;
	}else if(chucVu = 2){
		phuCap = 1000000;
	}else if(chucVu = 3){
		phuCap = 2000000;
	}else{
		printf("ko co chuc vu");
	}
	float thuong;
	if(day > 26){
		thuong = (day - 26) * 200000;
	}
	luong = day * 160000 * heSoLuong + phuCap + thuong;
	printf("he so luong la : %.0f\n",heSoLuong);
    printf("so ngay cong la : %d\n",day);
    printf("Phu cap: %.0f VND\n",phuCap);
    printf("Thuong: %.0f VND\n",thuong);
    printf("Luong thang: %.0f VND\n",luong);
    return 0;
}

