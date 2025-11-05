#include <stdio.h>
int main() {
    int array[] = {1, 1, 3, 7, 6, 1, 4, 2, 7, 3};
    int number = sizeof(array) / sizeof(array[0]);
    int maxCount = 0;
    int mostFreq = array[0];
    for (int i = 0; i < number; i++) {
        int count = 0;
        for (int j = 0; j < number; j++) {
            if (array[i] == array[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mostFreq = array[i];
        }
    }
    printf("Phan tu xuat hien nhieu nhat la: %d\n", mostFreq);
    printf("So lan xuat hien: %d", maxCount);
    return 0;
}

