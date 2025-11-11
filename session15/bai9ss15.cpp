#include <stdio.h>
int timPhanTuItNhat(int arr[], int size);
void inMang(int arr[], int size);
int main() {
    int arr[] = {1, 3, 3, 2, 4, 2, 5};
    int size = 7;
    printf("Mang: ");
    inMang(arr, size);
    int phanTu = timPhanTuItNhat(arr, size);
    printf("Phan tu xuat hien it nhat: %d\n", phanTu);
    return 0;
}
int timPhanTuItNhat(int arr[], int size) {
    int minCount = size + 1; 
    int timPhanTuItNhat;           
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count < minCount) {
            minCount = count;
            timPhanTuItNhat = arr[i];
        }
    }

    return timPhanTuItNhat;
}
void inMang(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
