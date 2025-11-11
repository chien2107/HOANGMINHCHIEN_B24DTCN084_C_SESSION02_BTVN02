#include <stdio.h>
int tongChuSo(int n);
int main() {
    int number;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &number);
    printf("Tong cac chu so cua %d la: %d\n", number, tongChuSo(number));
    return 0;
}
int tongChuSo(int n) {
    int sum = 0;
    if (n < 0)
        n = -n;
    while (n > 0) {
        sum += n % 10; 
        n /= 10;     
    }
    return sum;
}
