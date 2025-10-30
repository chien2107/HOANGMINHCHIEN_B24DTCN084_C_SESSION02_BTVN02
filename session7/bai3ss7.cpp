#include <stdio.h>
int main() {
    int number , charter_number , copy_number,  soDao = 0;
    printf("nhap so nguyen duong : ");
    scanf("%d", &number);
    if (number <= 0) {
        printf("moi ban nhap lai \n");
        return 0;
    }
    copy_number = number;
    while(number != 0){
    	charter_number = number % 10;
    	soDao = soDao * 10 + charter_number;
    	number = number / 10;
	}
	if(soDao == copy_number){
		printf("day la so doi xung ");
	}else{
		printf("day ko phai la so doi xung");
	}
    return 0;
}

