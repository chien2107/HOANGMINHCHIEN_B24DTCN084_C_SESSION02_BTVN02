#include <stdio.h>
int main() {
    int number;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &number);
    int array[number];
    for (int i = 0; i < number; i++) {
        printf("array[%d] =  ",i);
        scanf("%d", &array[i]);
    }
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < number; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}

