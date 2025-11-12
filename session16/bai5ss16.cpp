#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int count = 0;
    printf("Moi ban nhap chuoi: ");
	fgets(str,sizeof(str),stdin);
    int countWord = 0; 
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != ' ' && countWord == 0) {
            countWord = 1;
            count++;
        } else if (str[i] == ' ') {
            countWord = 0;
        }
    }
    printf("So tu co trong chuoi la: %d", count);
    return 0;
}

