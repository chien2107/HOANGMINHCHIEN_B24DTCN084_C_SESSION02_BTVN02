#include <stdio.h>
int compareArrays(int *a, int *b, int n);
int main() {
    int n;
    printf("Moi ban nhap so phan tu cho 2 mang : ");
    scanf("%d", &n);
    int array1[n], array2[n];
    printf("Mang thu nhat la\n");
    for (int i = 0; i < n; i++) {
    	printf("Phan tu array[%d] = ",i);
        scanf("%d", &array1[i]);
    }
    printf("\n");
    printf("Mang thu hai la\n");
    for (int i = 0; i < n; i++) {
    	printf("Phan tu array[%d] = ",i);
        scanf("%d", &array2[i]);
    }
    printf("\n");
    int ketQua = compareArrays(array1, array2, n);
    if (ketQua == 1) {
        printf("Hai mang giong nhau\n");
    } else {
        printf("Hai mang khac nhau");
    }
    return 0;
}
int compareArrays(int *a, int *b, int n) {
    for (int i = 0; i < n; i++) {
        if (*(a + i) != *(b + i)) {  
            return 0; 
        }
    }
    return 1;  
}
