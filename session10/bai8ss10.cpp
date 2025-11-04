#include <stdio.h>
int main() {
    int number , temp , x , start , end , mid;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &number);
    int array[number];
    for (int i = 0; i < number; i++) {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < number - 1; i++) {
        for (int j = 0; j < number - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    printf("\nMang sau khi sap xep tang dan: ");
    for (int i = 0; i < number; i++) {
        printf("%d ", array[i]);
    }
    printf("\n\nNhap phan tu can tim: ");
    scanf("%d", &x);
    start = 0;
    end = number - 1;
    int found = -1;
    while (start <= end) {
        mid = (start + end) / 2;
        if (array[mid] == x) {
            found = mid;
            break;
        } else if (array[mid] < x) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    if (found != -1)
        printf("Phan tu %d duoc tim thay tai chi so %d.\n", x, found);
    else
        printf("Khong tim thay phan tu %d trong mang.\n", x);
    return 0;
}

