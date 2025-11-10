#include <stdio.h>
int soHoanHao(int n);
int main() {
    int number1, number2;
    printf("Nhap so thu nhat: ");
    scanf("%d", &number1);
    printf("Nhap so thu hai: ");
    scanf("%d", &number2);
    if (soHoanHao(number1)) {
        printf("%d la so hoan hao\n", number1);
    } else {
        printf("%d khong phai la so hoan hao\n", number1);
    }
    if (soHoanHao(number2)) {
        printf("%d la so hoan hao\n", number2);
    } else {
        printf("%d khong phai la so hoan hao\n", number2);
    }
    return 0;
}
int soHoanHao(int n) {
    if (n < 1) {
        return 0; 
    }
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    if (sum == n) {
        return 1; 
    } else {
        return 0;
    }
}
