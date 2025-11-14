#include <stdio.h>
int main() {
    int a = 5;        
    int *ptr = &a;     
    printf("Gia tri cua a la: %d\n", a);
    printf("Dia chi cua a la: %p\n", &a);
    printf("Gia tri cua a la: %d\n", *ptr);
    printf("Dia chi cua a la: %p\n", ptr);
    return 0;
}

