#include <stdio.h>
int main() {
	int number , soDu , dao = 0 , copy_number;
	printf("nhap n : ");
	scanf("%d",&number);
    copy_number = number; 
    while (copy_number != 0) {
        soDu = copy_number % 10;        
        dao = dao * 10 + soDu;    
        copy_number = copy_number / 10;       
    }
    printf("%d",dao);
    return 0;
}

