#include <stdio.h>
int main() {
	int n;
	float A;
	printf("moi ban nhap vao so n : ");
	scanf("%d",&n);
	A = 1.0 / ((n - 1) * n) + 1.0 / (n * (n + 1)) + 1.0 / ((n + 1) * (n + 2));
	printf("%.5f",A);	
    return 0;
}

