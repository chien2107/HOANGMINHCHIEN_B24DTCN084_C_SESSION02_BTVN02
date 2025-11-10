#include <stdio.h>
void inMang(int array[], int size);
int main() {
    int number;
    int array[100];
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &number);
    for (int i = 0; i < number; i++) {
        printf("Phan tu array[%d] = ", i);
        scanf("%d", &array[i]);
    }
    inMang(array, number);
    return 0;
}
void inMang(int array[], int size) {
    printf("Cac phan tu trong mang la: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
