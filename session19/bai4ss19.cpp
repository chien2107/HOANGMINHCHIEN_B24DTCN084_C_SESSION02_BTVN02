#include <stdio.h>
int countValue(int *array, int n, int x);
int main() {
    int n;
    printf("Moi ban nhap so phan tu : ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++) {
    	printf("Phan tu array[%d] = ",i);
        scanf("%d", &array[i]);
    }
    int x;
    printf("Moi ban nhap gia tri can tim : ");
    scanf("%d", &x);
    int value = countValue(array, n, x);
    printf("Gia tri %d xuat hien %d lan trong mang.", x, value);
    return 0;
}
int countValue(int *array, int n, int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (*(array + i) == x) {   
            count++;
        }
    }
    return count;
}
