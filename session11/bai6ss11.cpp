#include <stdio.h>
int main() {
    int array[] = {4 , 1 , 5 , 2 , 6 , 8 , 7}; 
    int number = sizeof(array) / sizeof(array[0]);
    int max1, max2;
    for(int i = 0 ; i < number ; i++){
    	printf("%d ",array[i]);
	}
	printf("\n");
    if (array[0] > array[1]) {
        max1 = array[0];
        max2 = array[1];
    } else {
        max1 = array[1];
        max2 = array[0];
    }
    for (int i = 2; i < number; i++) {
        if (array[i] > max1) {
            max2 = max1;
            max1 = array[i];
        } else if (array[i] > max2 && array[i] != max1) {
            max2 = array[i];
        }
    }
    if (max1 == max2) {
        printf("Khong co phan tu lon thu hai trong mang.\n");
    } else {
        printf("Phan tu lon nhat : %d\n", max1);
        printf("Phan tu lon thu hai : %d", max2);
    }
    return 0;
}

