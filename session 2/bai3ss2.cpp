#include <stdio.h>
int main() {
	int number1 = 9 , number2 = 3 , tong = number1 + number2 , hieu = number1 - number2 , tich = number1 * number2;
	float thuong = number1 / number2;
	printf("tong cua 2 so là %d\n",tong);
	printf("hieu cua 2 so la %d\n",hieu);
	printf("tich cua 2 so la %d\n",tich);
	printf("thuong cua 2 so la %.2f",thuong);
    return 0;
}

