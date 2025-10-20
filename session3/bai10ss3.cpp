#include <stdio.h>
#include <math.h>
int main() {
	int a , b ;
	printf("moi ban nhap so a la : ");
	scanf("%d",&a);
	printf("moi ban nhap so b la : ");
	scanf("%d",&b);
	float S = sqrt(a + sqrt(b + 1)) + sqrt(b + sqrt(pow(a , 2) + pow(b ,2)));
	printf("%.2f",S);
    return 0;
}

