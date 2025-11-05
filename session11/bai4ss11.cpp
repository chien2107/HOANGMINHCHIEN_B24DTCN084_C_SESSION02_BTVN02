#include <stdio.h>
int main() {
    int array[] = {5 , 2 , 4 , 3 , 6 , 8 , 7, 1 , 9}; 
    int number = sizeof(array) / sizeof(array[0]);
    int temp;
    printf("Mang ban dau : ");
    for (int i = 0; i < number; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    for (int i = 0; i < number - 1; i++) {
        for (int j = 0; j < number - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep tang dan: ");
    for (int i = 0; i < number; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}

