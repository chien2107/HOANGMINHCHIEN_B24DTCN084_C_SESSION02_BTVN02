#include <stdio.h>
int main() {
    int number1 = 1;
    int number2 = 2;
    int sum = 0;
    int *ptr1 = &number1;
    int *ptr2 = &number2;
    int *ptrSum = &sum;
    *ptrSum = *ptr1 + *ptr2;
    printf("Tong cua 2 so la: %d\n", sum);
    return 0;
}

