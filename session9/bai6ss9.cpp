#include <stdio.h>
int main() {
    int number, x, flag = 0;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &number);
    int array[number];
    for (int i = 0; i < number; i++) {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }
    printf("Nhap gia tri can tim x: ");
    scanf("%d", &x);
    for (int i = 0; i < number; i++) {
        if (array[i] == x) {
            printf("%d ", i);
            flag = 1;
        }
    }
    if (flag == 0) {
        printf("\nGia tri %d khong ton tai trong mang", x);
    } else {
        printf("\n");
    }
    return 0;
}

