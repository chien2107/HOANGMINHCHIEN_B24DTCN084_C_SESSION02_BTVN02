#include <stdio.h>
#include <string.h>
struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[20];
};
int main() {
    struct Student sv[50] = {
        {1, "Nguyen Van A", 20, "0141434211"},
        {2, "Nguyen Van B", 21, "0412146745"},
        {3, "Nguyen Van C", 22, "0865542345"},
        {4, "Nguyen Van D", 23, "0912356433"},
        {5, "Nguyen Van E", 24, "0357754444"}
    };
    int size = 5; 
    printf("Them sinh vien moi\n");
    if (size >= 50) {
        printf("Mang da day, khong the them sinh vien moi.\n");
    } else {
        int newId;
        printf("Nhap ID sinh vien: ");
        scanf("%d", &newId);
        getchar(); 
        sv[size].id = newId;
        printf("Nhap ten sinh vien: ");
        fgets(sv[size].name, sizeof(sv[size].name), stdin);
        int len = strlen(sv[size].name);
        if (len > 0 && sv[size].name[len - 1] == '\n') {
            sv[size].name[len - 1] = '\0';
        }
        printf("Nhap tuoi sinh vien: ");
        scanf("%d", &sv[size].age);
        getchar();
        printf("Nhap so dien thoai: ");
        fgets(sv[size].phoneNumber, sizeof(sv[size].phoneNumber), stdin);
        len = strlen(sv[size].phoneNumber);
        if (len > 0 && sv[size].phoneNumber[len - 1] == '\n') {
            sv[size].phoneNumber[len - 1] = '\0';
        }
        size++; 
    }
    printf("\nDANH SACH SINH VIEN\n");
    for (int i = 0; i < size; i++) {
        printf("\nID %d:\n", sv[i].id);
        printf("Ten : %s\n", sv[i].name);
        printf("Tuoi : %d\n", sv[i].age);
        printf("So dien thoai : %s\n", sv[i].phoneNumber);
    }
    return 0;
}

