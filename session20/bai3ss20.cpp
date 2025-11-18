#include <stdio.h>
struct Student {
    char name[50];
    int age;
    char phoneNumber[20];
};
int main() {
	int size;
    struct Student sv[100];
    printf("Nhap so luong sinh vien :");
    scanf("%d",&size);
    for (int i = 0 ; i < size ; i++) {
        printf("\nNhap thong tin sinh vien thu %d\n", i + 1);
        printf("Nhap ten sinh vien: ");
        fflush(stdin);
        fgets(sv[i].name, sizeof(sv[i].name), stdin);
        printf("Nhap tuoi sinh vien: ");
        scanf("%d", &sv[i].age);
        getchar(); 
        printf("Nhap so dien thoai: ");
        fgets(sv[i].phoneNumber, sizeof(sv[i].phoneNumber), stdin);
    }
    printf("\nDANH SACH SINH VIEN\n");
    for (int i = 0; i < 5; i++) {
        printf("\nID %d:\n", i + 1);
        printf("Ten: %s", sv[i].name);
        printf("Tuoi: %d\n", sv[i].age);
        printf("So dien thoai: %s", sv[i].phoneNumber);
    }
    return 0;
}


