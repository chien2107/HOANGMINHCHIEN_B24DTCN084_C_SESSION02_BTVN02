#include <stdio.h>
struct Product {
    char name[50];
    float price;
    int quantity;
};
int main() {
    struct Product products[5];
    float sum = 0;
    for (int i = 0; i < 5; i++) {
        printf("Nhap thong tin cho san pham thu %d:\n", i + 1);
        printf("Ten san pham: ");
        fgets(products[i].name, sizeof(products[i].name), stdin);
        printf("Gia: ");
        scanf("%f", &products[i].price);
        printf("So luong: ");
        scanf("%d", &products[i].quantity);
        getchar(); 
        printf("\n");
    }
    for (int i = 0; i < 5; i++) {
        sum += products[i].price * products[i].quantity;
    }
    printf("Tong gia tri tat ca san pham: %.2f\n", sum);
    return 0;
}

