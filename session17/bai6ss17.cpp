#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Moi ban nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 
    int viTriHienTai = 0;   
    int doDaiHienTai = 0;   
    int viTriDaiNhat = 0;   
    int doDaiDaiNhat = 0;   
    for(int i = 0; i <= strlen(str); i++) {
        if(str[i] != ' ' && str[i] != '\0') {
            if(doDaiHienTai == 0) {
                viTriHienTai = i; 
            }
            doDaiHienTai++;
        } else {
            if(doDaiHienTai > doDaiDaiNhat) {
                doDaiDaiNhat = doDaiHienTai;
                viTriDaiNhat = viTriHienTai;
            }
            doDaiHienTai = 0; 
        }
    }
    printf("Tu dai nhat la : ");
    for(int i = viTriDaiNhat; i < viTriDaiNhat + doDaiDaiNhat; i++) {
        putchar(str[i]);
    }
    printf("\n");
    printf("Do dai la : %d", doDaiDaiNhat);
    return 0;
}

