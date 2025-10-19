#include <stdio.h>
int main() {
	int number = 12345;
	int number1 = number % 10;
	int number2 = (number % 100)/10;
	int number3 = (number % 1000)/100;
	int number4 = (number % 10000)/1000;
	int number5 = (number % 100000)/10000;
	int result = (number1 * 10000) + (number2 * 1000) + (number3 * 100) + (number4 * 10) + number5;
	printf("%d",result);
    return 0;
}

