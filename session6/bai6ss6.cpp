#include <stdio.h>
int main() {
    int choice;
    float a, b;
    printf("moi ban nhap so thu nhat: ");
    scanf("%f", &a);
    printf("moi ban nhap so thu hai: ");
    scanf("%f", &b);
    do {
        printf("1. tong 2 so\n");
        printf("2. hieu 2 so\n");
        printf("3. tich 2 so\n");
        printf("4. thuong 2 so\n");
        printf("5. thoat\n");
        printf("lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("tong la: %.2f\n", a + b);
                break;
            case 2:
                printf("hieu la: %.2f\n", a - b);
                break;
            case 3:
                printf("tich la: %.2f\n", a * b);
                break;
            case 4:
                if (b == 0) {
                    printf("khong the chia cho 0\n");
                } else {
                    printf("thuong la: %.2f\n", a / b);
                }
                break;
            case 5:
                printf("thoat chuong trinh\n");
                break;
            default:
                printf("khong hop le,moi ban nhap lai\n");
        }
    } while (choice != 5);
    return 0;
}

