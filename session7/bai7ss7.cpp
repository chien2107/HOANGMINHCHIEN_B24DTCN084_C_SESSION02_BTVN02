#include <stdio.h>
int main() {
    int a, b;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    if (a < 2){
    	a = 2;
	} 
    for (int i = a; i <= b; i++) {
        int soNguyenTo = 1; 
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) { 
                soNguyenTo = 0;
                break;
            }
        }
        if (soNguyenTo == 1){
        	printf("%d ", i);        	
		}		
    }
    return 0;
}

