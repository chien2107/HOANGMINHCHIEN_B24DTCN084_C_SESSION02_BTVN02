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
        {1, "Nguyen Van A", 20, "1412121113"},
        {2, "Nguyen Van B", 21, "0865234231"},
        {3, "Nguyen Van C", 22, "0543231432"},
        {4, "Nguyen Van D", 23, "0545642334"},
        {5, "Nguyen Van E", 24, "0363423235"}
    };
    int size = 5;
    int searchId;
    printf("Nhap ID sinh vien can sua: ");
    scanf("%d", &searchId);
    getchar(); 
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (sv[i].id == searchId) {
            found = 1;
            printf("ID: %d\n", sv[i].id);
            printf("Ten: %s\n", sv[i].name);
            printf("Tuoi: %d\n", sv[i].age);
            printf("\nNhap ten moi: ");
            fgets(sv[i].name, sizeof(sv[i].name), stdin);
            int len = strlen(sv[i].name);
            if (len > 0 && sv[i].name[len - 1] == '\n') {
                sv[i].name[len - 1] = '\0';
            }
            printf("Nhap tuoi moi: ");
            scanf("%d", &sv[i].age);
            getchar(); 
            printf("\nSinh vien da duoc cap nhat.\n");
            break;
        }
    }
    if (!found) {
        printf("Khong tim thay sinh vien.\n");
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

