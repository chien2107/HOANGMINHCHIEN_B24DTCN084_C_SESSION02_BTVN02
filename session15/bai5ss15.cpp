#include <stdio.h>
int timPhanTuNhieuNhat(int arr[], int size);
int main() {
    int arr[100], size;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++) {
    	printf("Phan tu arr[%d] = ",i);
        scanf("%d", &arr[i]);
    }
    int phanTu = timPhanTuNhieuNhat(arr, size);
    int count_1 = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == phanTu)
            count_1++;
    }
    printf("Phan tu xuat hien nhieu nhat la: %d\n", phanTu);
    printf("So lan xuat hien: %d\n", count_1);
    return 0;
}
int timPhanTuNhieuNhat(int arr[], int size) {
    int maxCount = 0;
    int ketQua = arr[0];
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > maxCount) {
            maxCount = count;
            ketQua = arr[i];
        }
    }
    return ketQua;
}
