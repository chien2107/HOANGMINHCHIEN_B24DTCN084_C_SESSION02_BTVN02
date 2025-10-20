#include <stdio.h>
int main() {
	int number , a , b , c , d;
	printf("moi ban nhap vao 1 so nguyen : ");
	scanf("%d",&number);
	a = number % 10;//lay dc 4
	b = (number / 10) % 10;
	c = (number / 100) % 10;
	d = number / 1000;
	int sum = a + b + c + d;
	printf("tong cua cac chu so la : %d",sum );	
    return 0;
}

