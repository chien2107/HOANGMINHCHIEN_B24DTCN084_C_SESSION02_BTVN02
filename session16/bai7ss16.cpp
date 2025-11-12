#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int chuCai = 0;
    int chuSo = 0;
    int kiTuDacBiet = 0;
    printf("Moi ban nhap chuoi: ");
    fgets(str, sizeof(str), stdin); 
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            chuCai++; 
        } else if (str[i] >= '0' && str[i] <= '9') {
            chuSo++;  
        } else{
            kiTuDacBiet++; 
        }
    }
    printf("So ky tu la chu cai: %d\n", chuCai);
    printf("So ky tu la chu so: %d\n", chuSo);
    printf("So ky tu dac biet: %d", kiTuDacBiet);
    return 0;
}


