#include <stdio.h>
int main() {
    int number , temp;
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &number);
    int array[number];
    for (int i = 0; i < number; i++) {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < number - 1; i++) {
    	int swap = 0; 
        for (int j = 0; j < number - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swap = 1;
            }
        }
        if (swap == 0) {
            break;
        }
    }
    printf("\n");
    printf("Mang sau khi sap xep tang dan la:\n");
    for (int i = 0; i < number; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}

