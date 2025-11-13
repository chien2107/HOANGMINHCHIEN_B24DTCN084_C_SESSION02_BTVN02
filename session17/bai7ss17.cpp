#include <stdio.h>
#include <string.h>
int main() {
    char strA[100], strB[100];
    printf("Moi ban nhap chuoi A: ");
    fgets(strA, sizeof(strA), stdin);
    strA[strcspn(strA, "\n")] = '\0'; 
    printf("Moi ban nhap chuoi B: ");
    fgets(strB, sizeof(strB), stdin);
    strB[strcspn(strB, "\n")] = '\0';
    int flag = 0; 
    for (int i = 0; i <= strlen(strA) - strlen(strB); i++) {
        int khop = 1; 
        for (int j = 0; j < strlen(strB); j++) {
            if (strA[i + j] != strB[j]) {
                khop = 0; 
                break;
            }
        }
        if (khop) {
            flag = 1;
            break;
        }
    }
    if (flag) {
        printf("Co\n");
    } else {
        printf("Khong\n");
    }
    return 0;
}

