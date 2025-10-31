#include <stdio.h>
int main() {
    int array[5] = {1,2,3,4,5}; 
    printf("Mang ban dau : ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    for (int i = 0; i < 5; i++) {
        if (array[i] % 2 == 0) {  
            array[i] = array[i] + 3;
        } else {               
            array[i] = array[i] + 2;
        }
    }
    printf("\n");
    printf("Mang sau khi thay doi : ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}

