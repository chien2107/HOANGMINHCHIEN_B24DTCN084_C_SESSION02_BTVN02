#include <stdio.h>
int main() {
	int n;
	printf("moi ban nhap so nam : ");
	scanf("%d",&n);
	switch(n){
		case 1:
			printf("thang co 31 ngay");			
		break;
		case 2:			
			printf("thang co 29 ngay");				
		break;
		case 3:
			printf("thang co 31 ngay");
		break;
		case 4:
			printf("thang co 30 ngay");
		break;
		case 5:
			printf("thang co 31 ngay");
		break;
		case 6:
			printf("thang co 30 ngay");
		break;
		case 7:
			printf("thang co 31 ngay");
		break;
		case 8:
			printf("thang co 31 ngay");
		break;
		case 9:
			printf("thang co 30 ngay");
		break;
		case 10:
			printf("thang co 31 ngay");
		break;
		case 11:
			printf("thang co 30 ngay");
		break;
		case 12:
			printf("thang co 31 ngay");
		break;
		default:
			printf("thang khong hop le");
	}
    return 0;
}

