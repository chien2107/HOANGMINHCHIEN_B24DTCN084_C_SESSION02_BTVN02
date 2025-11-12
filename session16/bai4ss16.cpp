#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "hoang minh chien"; 
    char word;                  
    int count = 0;    
    printf("Chuoi da khai bao: %s\n", str);
    printf("Nhap vao mot ky tu bat ky: ");
    scanf("%c", &word);
    for (int i = 0 ; i < strlen(str) ; i++) {
        if (str[i] == word) {
            count++;
        }
    }
    printf("Ky tu '%c' xuat hien %d lan trong chuoi", word, count);
    return 0;
}

