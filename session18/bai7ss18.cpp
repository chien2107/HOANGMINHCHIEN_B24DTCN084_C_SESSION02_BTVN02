#include <stdio.h>
int main() {
    int array[] = {9, 1, 3, 5, 2};
    int size = sizeof(array) / sizeof(array[0]);
    int *ptrArray = array;
    printf("Mang ban dau la : ");
    for (int i = 0; i < size; i++) {
        printf("%d ",*(ptrArray + i));
    }
    printf("\n");
    for (int i = 0 ; i < size - 1 ; i++) {
        for (int j = 0 ; j < size - i - 1 ; j++) {
            if (*(ptrArray + j) > *(ptrArray + j + 1)) {
                int temp = *(ptrArray + j);
                *(ptrArray + j) = *(ptrArray + j + 1);
                *(ptrArray + j + 1) = temp;
            }
        }
    }
    printf("Mang sau khi sap xep la : ");
    for (int i = 0 ; i < size ; i++) {
        printf("%d ", *(ptrArray + i));
    }
    return 0;
}


