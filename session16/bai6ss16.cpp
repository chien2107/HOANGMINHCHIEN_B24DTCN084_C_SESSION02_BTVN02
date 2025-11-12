#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int countWord = 0;
    printf("Moi ban nhap chuoi: ");
    fgets(str, sizeof(str), stdin); 
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            countWord++;
        }
    }
    printf("So ky tu la chu cai trong chuoi: %d", countWord);
    return 0;
}

