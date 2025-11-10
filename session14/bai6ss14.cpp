#include <stdio.h>
int soLonNhat(int array[], int size);
int main() {
    int n, array[100];
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Phan tu array[%d] =  ",i);
        scanf("%d", &array[i]);
    }
    printf("So lon nhat trong mang la: %d\n", soLonNhat(array, n));
    return 0;
}
int soLonNhat(int array[], int size) {
    int max = array[0]; 
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i]; 
        }
    }
    return max; 
}
