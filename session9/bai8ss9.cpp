#include <stdio.h>
#include <math.h>
int main() {
    int number;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &number);
    int array[number];
    int tong = 0;
    for (int i = 0; i < number; i++) {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < number; i++) {
        int isPrime = 1;
        if (array[i] < 2) {
            isPrime = 0;
        } else {
            for (int j = 2; j <= sqrt(array[i]); j++) {
                if (array[i] % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }
        if (isPrime == 1) {
            tong += array[i];
        }
    }
    printf("Tong cua cac so nguyen to la : %d", tong);
    return 0;
}

