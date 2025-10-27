#include <stdio.h>
int main() {
	int number1 , number2 , result;
	printf("moi ban nhap vao so dien ");
	scanf("%d",&number1);
	printf("moi ban nhap vao so dien ");
	scanf("%d",&number2);
	result = number2 - number1;
	if(0 <= result && result < 50){
		printf("gia dien la 10.000vnd");
	}else if(50 <= result && result < 100){
		printf("gia dien la 15.000vnd");
	}else if(100 <= result && result < 150){
		printf("gia dien la 20.000vnd");
	}else if(150 <= result && result < 200){
		printf("gia dien la 25.000vnd");
	}else if(200 <= result){
		printf("gia dien la 30.000vnd");
	}else{
		printf("khong co so dien");
	}
    return 0;
}

