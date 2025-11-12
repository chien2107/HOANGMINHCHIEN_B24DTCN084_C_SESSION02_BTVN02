#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "hoang minh chien"; 
    printf("Chuoi ban dau: %s\n", str);
    printf("Chuoi dao nguoc: ");
    for (int i = strlen(str) - 1 ; i >= 0 ; i--) {
        printf("%c", str[i]); 
    }
    printf("\n");
    return 0;
}

