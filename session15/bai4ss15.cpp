#include <stdio.h>
int tinhTongMang(int arr[], int size);
int main() {
    int arr[100];
    int size;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++) {
    	printf("Phan tu arr[%d] = ",i);
        scanf("%d", &arr[i]);
    }
    int tong = tinhTongMang(arr, size);
    printf("Tong cac phan tu trong mang la: %d\n", tong);
    return 0;
}
int tinhTongMang(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}
