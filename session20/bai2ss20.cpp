#include <stdio.h>
struct Student {
    char name[50];
    int age;
    char phoneNumber[20];
};
int main() {
    struct Student sv;
    printf("Moi ban nhap ten sinh vien: ");
    fgets(sv.name, sizeof(sv.name), stdin);
    printf("Moi ban nhap tuoi: ");
    scanf("%d", &sv.age);
    getchar(); 
    printf("Moi ban nhap so dien thoai: ");
    fgets(sv.phoneNumber, sizeof(sv.phoneNumber), stdin);
    printf("\nThong tin sinh vien\n");
    printf("Ten : %s", sv.name);
    printf("Tuoi : %d\n", sv.age);
    printf("So dien thoai : %s", sv.phoneNumber);
    return 0;
}


