#include <stdio.h>
int main() {
    int n;
        printf("moi ban nhap 1 so nguyen : ");
        scanf("%d", &n);
        if (n < 0 || n > 10) {
            printf("moi ban nhap lai\n ");
            return 0;
        }
    for (int i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}

