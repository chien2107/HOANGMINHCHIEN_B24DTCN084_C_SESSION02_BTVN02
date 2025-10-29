#include <stdio.h>
int main() {
    int a, b;
    printf("moi ban nhap so thu nhat: ");
    scanf("%d",&a);
    printf("moi ban nhap so thu hai: ");
    scanf("%d",&b);
    if (a <= 0 || b <= 0) {
        printf("Vui long nhap hai so nguyen duong!\n");
        return 0;
    }
    int x = a, y = b;
    while (x != y) {
        if (x > y){
        	x = x - y;
		}else{
			y = y - x;
		}
    }
    printf("uoc chung lon nhat cua %d va %d la: %d\n", a, b, x);
    return 0;
}


