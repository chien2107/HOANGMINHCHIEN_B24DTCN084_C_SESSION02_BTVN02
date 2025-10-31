#include <stdio.h>
int main() {
	int array[5] , flag = 0;
	printf("moi ban nhap gia tri cho phan tu\n");
	for(int i = 0 ; i < 5 ; i++){
		printf("array[%d] = ",i);
		scanf("%d",&array[i]);
	}
	for(int i = 0 ; i < 5 ; i++){
		if(array[i] % 2 == 0){
			printf("phan tu la so chan trong mang la : %d\n ",array[i]);
			flag = 1;
		}
	}
	if(flag == 0){
		printf("mang ko co so chan");
	}
    return 0;
}
