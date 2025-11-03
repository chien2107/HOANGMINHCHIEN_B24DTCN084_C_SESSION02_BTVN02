#include <stdio.h>
int main() {
    int number;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &number);
    int array[number];
    int tong = 0;
    for (int i = 0; i < number; i++) {
        printf("array[%d] = ",i);
        scanf("%d", &array[i]);
        tong += array[i]; 
    }
    float trungBinh = (float)tong / number;
    printf("Gia tri trung binh la: %.2f", trungBinh);
    return 0;
}

