#include <stdio.h>
int main() {
	int n;
	printf("moi ban nhap vao 1 so : ");
	scanf("%d",&n);
	if(n % 3 == 0 && n % 5 == 0){
		printf("so vua nhap chia het cho ca 3 va 5");
	}else if(n % 5 == 0){
		printf("so vua nhap chia het cho 5");
	}else if(n % 3 == 0){
		printf("so vua nhap chia het cho 3 ");
	}else{
		printf("khong chia het cho 3 hoac 5");
	}
    return 0;
}

