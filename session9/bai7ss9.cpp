#include <stdio.h>
int main() {
    int number;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &number);
    int array[number];
    for (int i = 0; i < number; i++) {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }
    printf("\nMang theo thu tu dao nguoc la:\n");
    for (int i = number - 1; i >= 0; i--) {
        printf("array[%d] = %d\n", i , array[i]);
    }
    return 0;
}

