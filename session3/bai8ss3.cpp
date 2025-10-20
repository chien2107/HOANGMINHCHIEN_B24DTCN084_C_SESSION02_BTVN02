#include <stdio.h>
int main() {
	int number , a , b , c , d;
	printf("moi ban nhap vao 1 so nguyen : ");
	scanf("%d",&number);
	a = number % 10;
	b = (number / 10) % 10;
	c = (number / 100) % 10;
	d = number / 1000;
	int result = a * 1000 + b * 100 + c * 10 + d;
	printf("tong cua cac chu so la : %d",result );	
    return 0;
}

