#include <stdio.h>
int tinhTong(int a, int b);    
int main() {
    int number1, number2, sum;
    printf("Nhap so thu nhat: ");
    scanf("%d", &number1);
    printf("Nhap so thu hai: ");
    scanf("%d", &number2);
    printf("Tong cua 2 so la : %d\n",tinhTong(number1 , number2));
    return 0;
}
int tinhTong(int a , int b){
	int sum = a + b;
	return sum;
}
