#include <stdio.h>
int main() {
	int a , b;
	printf("moi ban nhap vao so nguyen thu nhat  : ");
	scanf("%d",&a);
	printf("moi ban nhap vao so nguyen thu hai  : ");
	scanf("%d",&b);
	if(a > b){
		printf("so lon hon la %d ",a);
	}else if(b > a){
		printf("so lon hon la %d ",b);
	}else{
		printf("hai so bang nhau");
	}
    return 0;
}

