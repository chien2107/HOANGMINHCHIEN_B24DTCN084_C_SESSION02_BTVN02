#include <stdio.h>
#include <string.h>
int main() {
    char str[100]; 
    printf("Nhap vao mot chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Chuoi vua nhap la: %s\n", str);
    printf("Do dai cua chuoi la: %d", (int)strlen(str));
    return 0;
}

