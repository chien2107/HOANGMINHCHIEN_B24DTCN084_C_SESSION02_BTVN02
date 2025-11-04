#include <stdio.h>
int main() {
    int number , x , count = 0;
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &number);
    int array[number];
    for (int i = 0; i < number; i++) {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }
    printf("Nhap so can tim: ");
    scanf("%d", &x);
    for (int i = 0; i < number; i++) {
        if (array[i] == x) {
            count++;
        }
    }
    if (count > 0) {
        printf("So %d xuat hien %d lan trong mang.\n", x, count);
    } else {
        printf("Khong tim thay");
    }
    return 0;
}

