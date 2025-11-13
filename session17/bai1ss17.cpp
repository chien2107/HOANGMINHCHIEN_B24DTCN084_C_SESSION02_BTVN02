#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Moi ban nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int palindrome = 1; 
    for (int i = 0; i < strlen(str) / 2; i++) {
        if (str[i] != str[strlen(str) - i - 1]) {
            palindrome = 0;
            break;
        }
    }
    if (palindrome)
        printf("La palindrome\n");
    else
        printf("Khong phai palindrome\n");
    return 0;
}

