#include <stdio.h>
int main() {
	int choice , size , sum , max;
	int array[100];
	int *ptr = array;
	do{
		printf("\n---------------MENU---------------\n");
        printf("1. Nhap so phan tu va nhap mang\n");
        printf("2. Hien thi cac phan tu trong mang\n");
        printf("3. Tinh do dai mang\n");
        printf("4. Tinh tong cac phan tu trong mang\n");
        printf("5. Hien thi phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("----------------------------------\n");
        printf("Moi ban nhap lua chon : ");
        scanf("%d", &choice);
        switch(choice){
        	case 1:
        		printf("Moi ban nhap phan tu cho mang : ");
        		scanf("%d",&size);
        		for(int i = 0 ; i < size ; i++){
        			printf("Phan tu array[%d] = ",i);
        			scanf("%d",ptr + i);
				}
				break;
			case 2:
				for(int i = 0 ; i < size ; i++){
					printf("%d ", *(ptr + i));
				}
				break;
			case 3:
				printf("Do dai cua mang la : %d\n", size);
				break;
			case 4:
				sum = 0;
				for(int i = 0 ; i < size ; i++){
					sum += *(ptr + i);	
				}
				printf("Tong cua cac phan tu la : %d ",sum);
				break;
			case 5:
				max = *ptr;
				for(int i = 0 ; i < size ; i++){
					if(*(ptr + i) > max){
						max = *(ptr + i);
					}
				}
				printf("Phan tu lon nhat trong mang la : %d",max);
				break;
			case 6:
				printf("Thoat chuong trinh.");
				break;
			default:
				printf("Loi chuong trinh , moi ban chon lai.");	
		}	
	}while(choice != 6);
    return 0;
}

