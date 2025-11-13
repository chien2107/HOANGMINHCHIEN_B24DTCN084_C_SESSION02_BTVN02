#include <stdio.h>
#include <string.h>
int main() {
    char passWord[100];
    while (1) {
        int chuHoa = 0, chuThuong = 0, number = 0, kyTuDacBiet = 0;
        printf("Moi ban nhap mat khau: ");
        fgets(passWord, sizeof(passWord), stdin);
        passWord[strcspn(passWord, "\n")] = '\0'; 
        if (strlen(passWord) < 8) {
            printf("Mat khau phai co it nhat 8 ky tu, moi ban nhap lai.\n");
            continue; 
        }
        for (int i = 0; i < strlen(passWord); i++) {
            if (passWord[i] >= 'A' && passWord[i] <= 'Z') {
                chuHoa = 1;
            } else if (passWord[i] >= 'a' && passWord[i] <= 'z') {
                chuThuong = 1;
            } else if (passWord[i] >= '0' && passWord[i] <= '9') {
                number = 1;
            } else {
                kyTuDacBiet = 1;
            }
        }
        if (chuHoa && chuThuong && number && kyTuDacBiet) {
            printf("Hop le\n");
            break; 
        } else {
            printf("Khong hop le\n");
            if(!chuHoa){
            	printf("Phai co chu hoa\n");
			}
			if(!chuThuong){
				printf("Phai co chu thuong\n");
			}
			if(!number){
				printf("Phai co so\n");
			}
			if(!kyTuDacBiet){
				printf("Phai co ki tu dac biet\n");
			}
        }
    }
    return 0;
}

