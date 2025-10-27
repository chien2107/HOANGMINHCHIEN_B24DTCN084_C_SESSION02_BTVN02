#include <stdio.h>
int main() {
	int n;
	printf("moi ban nhap vao 1 so nguyen : ");
	scanf("%d",&n);
	if(n % 2 == 0){
		printf("day la so chan");
	}else{
		printf("day la so le");
	}
    return 0;
}

