#include <stdio.h>
int timKiemNhiPhan(int arr[], int size, int x);
void inMang(int arr[], int size);
int main() {
    int arr[100], size, x;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++) {
    	printf("Phan tu arr[%d] = ",i);
        scanf("%d", &arr[i]);
    }
    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);
    int index = timKiemNhiPhan(arr, size, x);
    if (index != -1)
        printf("Phan tu %d duoc tim thay o chi so %d.\n", x, index);
    else
        printf("Khong tim thay phan tu %d trong mang.\n", x);
    return 0;
}
int timKiemNhiPhan(int arr[], int size, int x) {
    int start = 0;
    int end = size - 1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (arr[mid] == x) {
            return mid; 
        } else if (arr[mid] < x) {
            start = mid + 1; 
        } else {
            end = mid - 1; 
        }
    }
    return -1; 
}
void inMang(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
