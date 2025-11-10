#include <stdio.h>
int tinhGiaiThua(int n);
int main() {
    int number;
    int ketQua;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("Khong co giai thua\n");
    } else {
        printf("%d! = %d\n", number, tinhGiaiThua(number));
    }
    return 0;
}
int tinhGiaiThua(int n) {
    int giaiThua = 1; 
    for (int i = 1; i <= n; i++) {
        giaiThua = giaiThua * i;
    }
    return giaiThua; 
}
