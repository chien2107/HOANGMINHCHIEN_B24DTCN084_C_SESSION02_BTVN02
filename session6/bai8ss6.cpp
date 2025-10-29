#include <stdio.h>
int main() {
    int x, y;
    printf("Nhap so nguyen duong thu nhat: ");
    scanf("%d", &x);
    printf("Nhap so nguyen duong thu hai: ");
    scanf("%d", &y);
    if (x <= 0 || y <= 0) {
        printf("Vui long nhap hai so nguyen duong!\n");
        return 0;
    }
    int a = x, b = y;
    while (a != b) {
        if (a > b){
        	a = a - b;
		}else{
			b = b - a;			
		}
    }
    int ucln = a; 
    int boiChung = (x * y) / ucln; 
    printf("Boi chung nho nhat (BCNN) cua %d va %d la: %d\n", x, y, boiChung);
    return 0;
}

