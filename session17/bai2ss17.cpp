#include <stdio.h>
#include <string.h>
int main() {
	void chuHoa(char str[]);
	void chuThuong(char str[]);
    char str[100];
    int choice;
    printf("Nhap vao mot chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 
    do{
    	printf("\n----------MENU----------\n");
    	printf("1. Chuyen chuoi thanh chu hoa\n");
    	printf("2. Chuyen chuoi thanh chu thuong\n");
    	printf("------------------------\n");
    	printf("Moi ban nhap lua chon : ");
    	scanf("%d", &choice);
    	switch(choice){
    		case 1:
    			chuHoa(str);
    			printf("Chuoi in hoa la : %s\n",str);
    			break;
    		case 2:
    			chuThuong(str);
    			printf("Chuoi in thuong la : %s\n",str);
    			break;
    		default:
    			printf("Moi ban nhap lai\n");
		} 	
	}while(choice != 2);
    return 0;
}
void chuHoa(char str[]) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
}
void chuThuong(char str[]) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
}
