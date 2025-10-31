#include <stdio.h>
#include <math.h>
int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++) {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }
    printf("Mang sau khi nhap la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ",array[i]);
    }
    printf("\n");
    printf("Cac so nguyen to trong mang la: ");
    for (int i = 0; i < n; i++) {
        int isPrime = 1;

        if (array[i] < 2)
            isPrime = 0;
        else {
            for (int j = 2; j <= sqrt(array[i]); j++) {
                if (array[i] % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }
        if (isPrime)
            printf("%d ", array[i]);
    }
    return 0;
}

