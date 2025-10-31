#include <stdio.h>
int main() {
	int soPhanTu , array[100];
	printf("moi ban nhap so phan tu : ");
	scanf("%d",&soPhanTu);
	for(int i = 0 ; i < soPhanTu ; i++){
		printf("array[%d] = ",i);
		scanf("%d",&array[i]);
	}
    return 0;
}

