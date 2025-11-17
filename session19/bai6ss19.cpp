#include <stdio.h>
void copyArray(int *src, int *dest, int n);
int main() {
    int n;
    printf("Moi ban nhap so phan tu cho mang: ");
    scanf("%d", &n);
    int arrayA[n], arrayB[n];
    printf("Mang A la\n");
    for (int i = 0; i < n; i++) {
    	printf("Phan tu array[%d] = ",i);
        scanf("%d", &arrayA[i]);
    }
    printf("\n");
    copyArray(arrayA, arrayB, n);
    printf("Mang B sau khi sao chep\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu array[%d] = %d\n",i , arrayB[i]);
    }
    printf("\n");
    return 0;
}
void copyArray(int *src, int *dest, int n) {
    for (int i = 0; i < n; i++) {
        *(dest + i) = *(src + i);  
    }
}

