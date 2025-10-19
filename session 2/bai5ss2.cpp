#include <stdio.h>
int main() {
	int number1 = 7,number2 = 2;
	float number3 = 6.5;
	int tong_int = number1 + number2 + number3;
	float tong_float = number1 + number2 + number3;		
	printf("tong cua 3 so la %.2f\n",tong_float);
	printf("tong cua 3 so la %d",tong_int);		
    return 0;
}

