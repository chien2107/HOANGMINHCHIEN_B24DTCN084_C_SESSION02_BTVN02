#include <stdio.h>
#include <string.h>
int main() {
    char inputString[100];   
    char reverseString[100]; 
    printf("Moi ban nhap vao mot chuoi: ");
    fgets(inputString , sizeof(inputString) , stdin);    
    int size = strlen(inputString);
    if (inputString[size - 1] == '\n') {
        inputString[size - 1] = '\0';
        size--;
    }
    char*ptrInput = inputString;
    char*ptrReverse = reverseString;
    for (int i = size - 1 ; i >= 0 ; i--) {
        *(ptrReverse++) = *(ptrInput + i);
    }
    *ptrReverse = '\0'; 
    printf("Chuoi sau khi dao nguoc: %s\n", reverseString);
    return 0;
}

