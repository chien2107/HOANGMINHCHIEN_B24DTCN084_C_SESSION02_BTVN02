#include <stdio.h>
int main() {
    int number,x;
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &number);
    int array[number];
    for (int i = 0; i < number; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &array[i]);
    }
    printf("Nhap so can tim: ");
    scanf("%d", &x);
    for (int i = 0; i < number; i++) {
        if (array[i] == x) {
            printf("Phan tu %d tai chi so %d\n", x, i);
            return 0;
        }
    }
    printf("Khong tim thay");
    return 0;
}

