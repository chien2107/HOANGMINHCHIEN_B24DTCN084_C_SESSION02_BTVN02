#include <stdio.h>
int isDuplicate(int arr[], int size);
int deleteDuplicates(int arr[], int size);
void inMang(int arr[], int size);
int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 1, 6};
    int size = 8;
    printf("Mang ban dau: ");
    inMang(arr, size);
    int newSize = deleteDuplicates(arr, size);
    printf("Mang sau khi loai bo so bi trung : ");
    inMang(arr, newSize);
    printf("Mang moi: %d\n", newSize);
    return 0;
}
int isDuplicate(int arr[], int size) {
    for (int j = 0; j < size; j++) {
        if (arr[j] == arr[size])
            return 1;
    }
    return 0; 
}
int deleteDuplicates(int arr[], int size) {
    int newSize = 0; 
    for (int i = 0; i < size; i++) {
        if (!isDuplicate(arr, i)) {
            arr[newSize] = arr[i]; 
            newSize++;
        }
    }
    return newSize;
}
void inMang(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

