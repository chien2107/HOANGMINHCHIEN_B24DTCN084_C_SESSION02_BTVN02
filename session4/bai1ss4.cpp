#include <stdio.h>
int main() {
	int n;
	printf("moi ban nhap 1 so nguyen : ");
	scanf("%d",&n);
	if(n < 0){
		printf("so vua nhap la so am %d",n);
	}else if(n > 0){
		printf("so vua nhap la so duong %d",n);
	}else{
		printf("so vua nhap la so 0");
	}
    return 0;
}

