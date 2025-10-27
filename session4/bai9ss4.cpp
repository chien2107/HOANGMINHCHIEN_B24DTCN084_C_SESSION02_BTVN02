#include <stdio.h>
int main() {
    int day, mouth, years;
    int hopLe = 1; 
    printf("Nhap ngay: ");
    scanf("%d", &day);
    printf("Nhap thang: ");
    scanf("%d", &mouth);
    printf("Nhap nam: ");
    scanf("%d", &years);
    if (mouth < 1 || mouth > 12) {
        hopLe = 0;
    } else {
        int soNgay;
        if (mouth == 1 || mouth == 3 || mouth == 5 || mouth == 7 || mouth == 8 || mouth == 10 || mouth == 12) {
            soNgay = 31;
        } else if (mouth == 4 || mouth == 6 || mouth == 9 || mouth == 11) {
            soNgay = 30;
        } else { 
            if ((years % 4 == 0 && years % 100 != 0) || (years % 400 == 0)) {
                soNgay = 29;
            } else {
                soNgay = 28;
            }
        }
        if (day < 1 || day > soNgay) {
            hopLe = 0;
        }
    }
    if (hopLe == 1) {
        printf("Ngay thang nam hop le");
    } else {
        printf("Ngay thang nam khong hop le");
    }
    return 0;
}

