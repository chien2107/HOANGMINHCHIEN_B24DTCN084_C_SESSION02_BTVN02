#include <stdio.h>
int main() {
	float a , b ;
	char op;
	printf("nhap vao so a : ");
	scanf("%f",&a);
	printf("nhap vao so b : ");
	scanf("%f",&b);
	printf("nhap vao toan tu : ");
	scanf(" %c",&op);
	switch(op){
		case '+':
			printf("%.2f + %.2f = %.2f", a , b , a + b);
			break;
		case '-':
			printf("%.2f - %.2f = %.2f", a , b , a - b);
			break;
		case '*':
			printf("%.2f * %.2f = %.2f", a , b , a * b);
			break;
		case '/':
			if(b == 0){
				printf("khong the chia cho 0");
			}else{
				printf("%.2f / %.2f = %.2f", a , b , a / b);
			}
			break;
			default:
			printf("toan tu khong hop le");				
	}
    return 0;
}

