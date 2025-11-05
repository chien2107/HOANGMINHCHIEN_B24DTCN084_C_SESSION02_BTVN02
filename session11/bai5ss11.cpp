#include <stdio.h>
#include <string.h>
int main() {
    char array[5][20] = {"coca", "pesi", "coffee", "tea", "water"};
    int number = 5;
    char x[20];
    int found = -1;
    printf("Danh sach chuoi:\n");
    for (int i = 0; i < number; i++) {
        printf("%d. %s\n", i, array[i]);
    }
    printf("\nNhap chuoi can tim: ");
    scanf("%s", x);
    for (int i = 0; i < number; i++) {
        if (strcmp(array[i], x) == 0) {
            found = 0;
            break;
        }
    }
    if (found != -1) {
        printf("Chuoi %s duoc tim thay tai vi tri %d\n", x, found);
    } else {
        printf("Khong tim thay chuoi %s trong mang", x);
    }
    return 0;
}

