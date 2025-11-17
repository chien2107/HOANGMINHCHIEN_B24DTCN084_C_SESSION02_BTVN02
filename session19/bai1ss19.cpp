#include <stdio.h>
int findMax(int *array, int n);
int main() {
    int n;
    printf("Moi ban nhap so phan tu : ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0 ; i < n ; i++) {
    	printf("Phan tu array[%d] = ", i);
        scanf("%d",&array[i]);
    }  
    int maxNumber = findMax(array, n);
    printf("Phan tu lon nhat la: %d", maxNumber);
    return 0;
}
int findMax(int *array, int n) {
    int max = *array;           
    for (int i = 1 ; i < n ; i++) {
        if (*(array + i) > max) {
            max = *(array + i);
        }
    }
    return max;
}

