#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Moi ban nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    int flag = 1; 
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z' && flag == 1) {
            str[i] = str[i] - ('a' - 'A');
        }
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            flag = 1; 
        } else {
            flag = 0; 
        }
    }
    printf("Chuoi sau khi viet hoa dau tu: %s", str);
    return 0;
}


