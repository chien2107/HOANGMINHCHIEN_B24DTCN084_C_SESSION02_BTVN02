#include <stdio.h>
int daoSoNguyen(int n);
int main() {
    int number;
    printf("Nhap 1 so nguyen : ");
    scanf("%d", &number);
    printf("So dao nguoc la : %d\n", daoSoNguyen(number));
    return 0;
}
int daoSoNguyen(int n) {
    int dao = 0;
    while (n != 0) {
        int chuSo = n % 10;       
        dao = dao * 10 + chuSo; 
        n = n / 10;    
    }
    return dao;
}
