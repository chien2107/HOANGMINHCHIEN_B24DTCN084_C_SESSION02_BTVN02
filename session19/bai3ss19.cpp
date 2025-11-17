#include <stdio.h>
float average(int *array, int n);
int main() {
    int n;
    printf("Moi ban nhap so phan tu : ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++) {
    	printf("Phan tu array[%d] = ",i);
        scanf("%d", &array[i]);
    }
    float trungBinhCong = average(array, n);
    printf("Gia tri trung binh cua mang la : %.2f", trungBinhCong);
    return 0;
}
float average(int *array, int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        tong += *(array + i);  
    }
    return (float)tong / n;  
}

