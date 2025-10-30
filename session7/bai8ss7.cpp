#include <stdio.h>
int main() {
    int number, x, copy_number , soDu, count = 0;
    printf("Nhap so nguyen duong : ");
    scanf("%d", &number);
    printf("Nhap chu so x : ");
    scanf("%d", &x);
    if (number < 0 || x < 0 || x > 9) {
        printf("Du lieu khong hop le \n");
        return 0;
    }
    copy_number = number;
    if (number == 0 && x == 0) {
        count = 1;
    } else {
        while (copy_number != 0) {
        	soDu = copy_number % 10;    
            if (soDu == x) {
                count++;          
            }
            copy_number = copy_number / 10;   
        }       	
	}		
    printf("Chu so %d xuat hien %d lan trong %d\n", x , count , number);
    return 0;
}

