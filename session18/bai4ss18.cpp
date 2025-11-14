#include <stdio.h>
int main() {
    int array[] = {1 , 2 , 3 , 4 , 5};
    int size = sizeof(array) / sizeof(array[0]);
    int *ptrArray = array;
    printf("Cac phan tu trong mang:\n");
    for (int i = 0 ; i < size ; i++) {
        printf("Phan tu array[%d] = %d\n", i, *(ptrArray + i));
    }
    return 0;
}

