#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "chien";
    printf("Chuoi da khai bao: %s\n", str);
    printf("Cac ky tu trong chuoi la:\n");
    for (int i = 0 ; i < strlen(str) ; i++) {
        printf("%c ", str[i]); 
    }
    return 0;
}


