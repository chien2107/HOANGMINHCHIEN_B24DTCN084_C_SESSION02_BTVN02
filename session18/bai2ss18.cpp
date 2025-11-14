#include <stdio.h>
int main() {
    int number1 = 1;
    int number2 = 2;
    int *ptr1 = &number1;
    int *ptr2 = &number2;
    printf("Truoc khi hoan doi:\n");
    printf("so thu nhat la : %d\n", number1);
    printf("so thu hai la : %d\n", number2);
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    printf("Sau khi hoan doi:\n");
    printf("so thu nhat la : %d\n", number1);
    printf("so thu hai la : %d", number2);
    return 0;
}

