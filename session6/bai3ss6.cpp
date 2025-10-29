#include <stdio.h>
int main() {
	int n , i;
	int tong = 0;
	printf("moi ban nhap so nguyen ");
	scanf("%d",&n);
	for(i = 0 ; i <= n ; i++){
		tong += i;
	}
	printf("tong la : %d",tong);
    return 0;
}

