#include <stdio.h>
int main() {
	float celsius;
	printf("Moi ban nhap nhiet do :");
	scanf("%f",&celsius);
	float fahrenheit = celsius * 9/5 + 32;
	printf("%.2f",fahrenheit);
    return 0;
}

