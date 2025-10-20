#include <stdio.h>
#include <math.h>
int main() {
	int a , b , S;
	printf("moi ban nhap vao so a : ");
	scanf("%d",&a);
	printf("moi ban nhap vao so b : ");
	scanf("%d",&b);
	S = sqrt(pow(a , 2) + pow(b , 2))/(a + b) + (sqrt(a) + sqrt(b)) / (a * b);
	printf("%d",S);
    return 0;
}

