#include <stdio.h>
int main() {
    int number,soChan = 0,soLe = 0;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &number);
    int array[number];
    for (int i = 0; i < number; i++) {
        printf("array[%d] = ",i);
        scanf("%d", &array[i]);
    }
    printf("\nCac so chan trong mang: ");
    for (int i = 0; i < number; i++) {
        if (array[i] % 2 == 0) {
            printf("%d ", array[i]);
            soChan++;
        }
    }
    printf("\nCac so le trong mang: ");
    for (int i = 0; i < number; i++) {
        if (array[i] % 2 != 0) {
            printf("%d ", array[i]);
            soLe++;
        }
    }
    printf("\nTong so chan: %d\n",soChan);
    printf("Tong so le: %d",soLe);

    return 0;
}

