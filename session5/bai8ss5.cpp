#include <stdio.h>
int main() {
    int m;
    float money = 0;
    printf("moi ban nhap so met khoi : ");
    scanf("%d", &m);
    if(m < 0){
    	printf("ko hop le");
    	return 0;
	}else if (m <= 10) {
        money = m * 6000;
    }else if (m <= 20) {
        money = 10 * 6000 + (m - 10) * 7000;
    }else if (m <= 30) {
        money = 10 * 6000 + 10 * 7000 + (m - 20) * 8500;
    }else {
        money = 10 * 6000 + 10 * 7000 + 10 * 8500 + (m - 30) * 10000;
    }    
    printf("so tien phai tra la : %.3f VND", money);
    return 0;
}

