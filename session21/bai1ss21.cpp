#include <stdio.h>
struct Car {
    char model[50];
    int year;
    float price;
};
int main() {
    struct Car myCar = {"Mercedes", 2025, 1000000};
    printf("Thong tin xe\n");
    printf("Model: %s\n", myCar.model);
    printf("Nam san xuat: %d\n", myCar.year);
    printf("Gia: %.0f\n", myCar.price);
    return 0;
}


