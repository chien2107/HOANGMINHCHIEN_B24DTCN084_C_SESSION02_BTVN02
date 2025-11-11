#include <stdio.h>
int hieuHaiSo(int a, int b);
int tichHaiSo(int a, int b);
int main() {
    int x, y;
    printf("Nhap so nguyen thu nhat : ");
    scanf("%d", &x);
    printf("Nhap so nguyen thu hai : ");
    scanf("%d",&y);
    int hieu = hieuHaiSo(x, y);
    int tich = tichHaiSo(x, y);
    printf("\nHieu cua %d va %d la: %d", x, y, hieu);
    printf("\nTich cua %d va %d la: %d", x, y, tich);
    return 0;
}
int hieuHaiSo(int a, int b) {
    return a - b;
}
int tichHaiSo(int a, int b) {
    return a * b;
}
