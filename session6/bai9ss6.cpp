#include <stdio.h>
int main() {
	int choice;
	int a , b, c , min , max , in = 0;
	do{
		printf("1 . Nhap 3 so nguyen\n");
		printf("2 . Tinh tong 3 so\n");
		printf("3 . Tinh trung binh cong cua 3 so\n");
		printf("4 . Tim so nho nhat\n");
		printf("5 . Tim so lon nhat\n");
		printf("6 . Thoat\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Moi ban nhap so thu nhat : ");
				scanf("%d",&a);
				printf("Moi ban nhap so thu hai : ");
				scanf("%d",&b);
				printf("Moi ban nhap so thu ba : ");
				scanf("%d",&c);
				in = 1;
				break;
			case 2:
				if(in == 0){
					printf("moi ban nhap lai 3 so\n");					
				}else{
					printf("Tong cua 3 so la : %d \n" ,a + b + c);
				}
				break;
			case 3:
				if(in == 0){
					printf("moi ban nhap lai 3 so\n");
				}else{
					printf("Trung binh cong cua 3 so la : %d \n" , (a + b + c) / 3);					
				}
				break;
			case 4:
				if(in == 0){
					printf("moi ban nhap lai 3 so\n");
				}else{
					min = a;
                	if (b < min){
                		min = b;
					}
                    if (c < min){
                    	min = c;
					}
                    printf("So nho nhat la : %d\n", min);							
				}
				break;			
			case 5:
				if(in == 0){
					printf("moi ban nhap lai 3 so\n");
				}else{
					max = a;
                    if (b > max){
                    	max = b;
					}
                    if (c > max){
                    	max = c;
					}
                    printf("So lon nhat la : %d\n", max);					
				}
				break;                
			case 6:
				printf("thoat chuong trinh\n");
				break;	
			default:
				printf("Lua chon ko dung , moi ban nhap lai\n");																						
		}		
	}while(choice != 6);
    return 0;
}

