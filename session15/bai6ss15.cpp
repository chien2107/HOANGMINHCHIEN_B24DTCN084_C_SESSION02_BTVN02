#include <stdio.h>
void sapXep(int arr[], int size);
void inMang(int arr[], int size);
int main() {
    int arr[100], size;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++) {
    	printf("Phan tu arr[%d] = ",i);
        scanf("%d", &arr[i]);
    }
    sapXep(arr, size);
    printf("Mang sau khi sap xep tang dan:\n");
    inMang(arr, size);
    return 0;
}
void sapXep(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void inMang(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
