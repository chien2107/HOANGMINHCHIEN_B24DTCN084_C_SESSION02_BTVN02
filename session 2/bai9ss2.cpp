#include <stdio.h>
#include <math.h>
int main() {
	int a = 1 , b = 2 , c = 3;
	int A = pow(a,3) + pow(b,2) + 2 * c + sqrt((a + b + c));
	printf("%d",A);
    return 0;
}

