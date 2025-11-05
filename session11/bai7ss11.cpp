#include <stdio.h>
int main() {
    int number;
    printf("Nhap so thang : ");
    scanf("%d", &number);
    if (number < 2) {
        printf("Can co it nhat 2 thang de tinh toan.\n");
        return 0;
    }
    int price[number];
    printf("Nhap gia co phieu cua tung thang:\n");
    for (int i = 0; i < number; i++) {
        printf("Thang %d: ", i + 1);
        scanf("%d", &price[i]);
    }
    int buy = price[0];
    int min_loss = buy - price[1];
    int best_month = 2;

    for (int i = 1; i < number; i++) {
        int loss = buy - price[i];
        if (loss < 0) {
            loss = 0; 
        }
        if (loss < min_loss) {
            min_loss = loss;
            best_month = i + 1;
        }
    }
    printf("\nGia mua ban dau: %d\n", buy);
    if (min_loss == 0) {
        printf("Ban o thang %d se khong bi lo (co the lai).\n", best_month);
    } else {
        printf("Ban o thang %d se lo it nhat: %d don vi", best_month, min_loss);
    }
    return 0;
}

