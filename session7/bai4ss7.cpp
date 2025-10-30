#include <stdio.h>
int main() {
	int chieuDai , chieuRong;
	printf("nhap chieu dai : ");
	scanf("%d",&chieuDai);
	printf("nhap chieu rong : ");
	scanf("%d",&chieuRong);
	if(chieuDai >= chieuRong){
		for(int i = 0 ; i < chieuRong ; i++){
			for(int j = 0 ;j  < chieuDai ;j++ ){
				printf(" * ");
			}
			printf("\n");
		}
	}else{
		printf("sai");
	}
    return 0;
}

