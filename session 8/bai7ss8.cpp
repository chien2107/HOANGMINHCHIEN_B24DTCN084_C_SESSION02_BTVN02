#include <stdio.h>
int main() {
    int soPhanTu , array[100];
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &soPhanTu);
    for (int i = 0; i < soPhanTu; i++) {
        do {
            printf("array[%d] = ", i);
            scanf("%d", &array[i]);
            if (array[i] % 2 == 0) {
                printf("sai,moi ban nhap lai\n");
            }
        } while (array[i] % 2 == 0); 
    }
    printf("Mang vua nhap la: ");
    for (int i = 0; i < soPhanTu; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}

