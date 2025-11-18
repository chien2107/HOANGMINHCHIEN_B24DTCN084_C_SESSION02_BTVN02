#include <stdio.h>
struct Student {
    int id;            
    char name[50];
    int age;
    char phoneNumber[20];
};

int main() {
    struct Student sv[50];  
    int size = 5;
    for (int i = 0 ; i < size ; i++) {
    	sv[i].id = i + 1;
        printf("\nNhap thong tin sinh vien thu %d\n", i + 1);
        printf("Nhap ten sinh vien: ");
        fgets(sv[i].name, sizeof(sv[i].name), stdin);
        printf("Nhap tuoi sinh vien: ");
        scanf("%d", &sv[i].age);
        getchar(); 
        printf("Nhap so dien thoai: ");
        fgets(sv[i].phoneNumber, sizeof(sv[i].phoneNumber), stdin);
    }
    printf("\nDANH SACH SINH VIEN\n");
    for (int i = 0 ; i < size ; i++) {
        printf("\nID %d:\n", sv[i].id);
        printf("Ten : %s", sv[i].name);
        printf("Tuoi : %d\n", sv[i].age);
        printf("So dien thoai : %s", sv[i].phoneNumber);
    }
    return 0;
}

