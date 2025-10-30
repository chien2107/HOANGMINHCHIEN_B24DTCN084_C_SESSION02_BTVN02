#include <stdio.h>
#include <math.h>
int main() {
    int number, copy_number, count = 0, soDu;
    int tong = 0;
    printf("Nhap so nguyen duong : ");
    scanf("%d", &number);
    if (number <= 0) {
        printf("khong phai so nguyen duong,moi ban nhap lai \n");
        return 0;
    }
    copy_number = number;
    while (copy_number != 0) {
        count++;
        copy_number = copy_number / 10;
    }
    copy_number = number; 
    while (copy_number != 0) {
        soDu = copy_number % 10;
        tong += pow(soDu, count);
        copy_number = copy_number / 10;
    }
    if (tong == number){
    	printf("%d la so armstrong.\n", number);
	}else{
		printf("%d khong phai la so armstrong.\n", number);		
	}
    return 0;
}

