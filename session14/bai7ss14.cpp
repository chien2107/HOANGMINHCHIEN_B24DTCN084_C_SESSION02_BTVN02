#include <stdio.h>
int soNguyenTo(int n);
int main() {
    int number;
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &number);
    if (soNguyenTo(number)) {
        printf("%d la so nguyen to", number);
    } else {
        printf("%d khong phai la so nguyen to", number);
    }
    return 0;
}
int soNguyenTo(int n) {
    if (n < 2) {
        return 0; 
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1; 
}
