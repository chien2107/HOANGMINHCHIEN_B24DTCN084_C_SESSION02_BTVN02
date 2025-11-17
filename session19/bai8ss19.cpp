#include <stdio.h>
#include <math.h>

int main() {
    int array[100];
    int choice , size;
    int *ptr = array, sapXep, x, temp, flag;
    do {
        printf("\n---------------MENU---------------\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. In ra cac phan tu la so chan\n");
        printf("3. In ra cac phan tu la so nguyen to\n");
        printf("4. Dao nguoc mang\n");
        printf("5. Sap xep mang\n");
        printf("6. Tim kiem phan tu trong mang\n");
        printf("7. Thoat\n");
        printf("----------------------------------\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: 
                printf("Moi ban nhap so phan tu: ");
                scanf("%d", &size);
                for(int i = 0; i < size; i++) {
                    printf("Phan tu array[%d] = ", i);
                    scanf("%d", ptr + i);
                }
                break;
            case 2:
                printf("Cac phan tu so chan la: ");
                for(int i = 0; i < size; i++) {
                    if(*(ptr + i) % 2 == 0){
                    	printf("%d ", *(ptr + i));
					}
                }
                printf("\n");
                break;
            case 3:
                printf("Cac phan tu la so nguyen to: ");
                for(int i = 0; i < size; i++) {
                    int n = *(ptr + i);
                    int laNguyenTo = 1;
                    if(n < 2) laNguyenTo = 0;
                    for(int j = 2; j <= sqrt(n); j++) {
                        if(n % j == 0) {
                            laNguyenTo = 0;
                            break;
                        }
                    }
                    if(laNguyenTo){
                    	printf("%d ", n);
					}
                }
                printf("\n");
                break;
            case 4: {
                int *start = ptr;
                int *end = ptr + size - 1;
                while(start < end) {
                    temp = *start;
                    *start = *end;
                    *end = temp;
                    start++;
                    end--;
                }
                printf("Mang sau khi dao nguoc: ");
                for(int i = 0; i < size; i++){
                	printf("%d ", *(ptr + i));
				}
                break;
            }
            case 5:
                printf("\n---Menu sap xep---\n");
                printf("1. Tang dan\n");
                printf("2. Giam dan\n");
                printf("Lua chon: ");
                scanf("%d", &sapXep);
                for(int i = 0; i < size - 1; i++) {
                    for(int j = i + 1; j < size; j++) {
                        if(sapXep == 1 && *(ptr + i) > *(ptr + j)) {
                            temp = *(ptr + i);
                            *(ptr + i) = *(ptr + j);
                            *(ptr + j) = temp;
                        }
                        if(sapXep == 2 && *(ptr + i) < *(ptr + j)) {
                            temp = *(ptr + i);
                            *(ptr + i) = *(ptr + j);
                            *(ptr + j) = temp;
                        }
                    }
                }
                printf("Mang sau khi sap xep: ");
                for(int i = 0; i < size; i++){
                	printf("%d ", *(ptr + i));
				}
                break;
            case 6: 
                flag = 0;
                printf("Nhap gia tri can tim: ");
                scanf("%d", &x);
                for(int i = 0; i < size; i++) {
                    if(*(ptr + i) == x) {
                        printf("Tim thay %d o vi tri %d\n", x, i);
                        flag = 1;
                    }
                }
                if(!flag){
                	printf("Khong tim thay gia tri %d trong mang\n", x);
				}
                break;
            case 7:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Loi chuong trinh , moi ban chon lai.");
        }
    } while(choice != 7);
    return 0;
}

