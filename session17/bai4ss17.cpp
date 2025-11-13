#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    char x;
    printf("Moi ban nhap mot chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Moi ban nhap ky tu can xoa: ");
    scanf("%c", &x);
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == x) {
            for (int j = i; j < strlen(str); j++) {
                str[j] = str[j + 1];
            }
            i--;
        }
    }
    printf("Chuoi sau khi xoa ky tu la : %s\n", str);
    return 0;
}

