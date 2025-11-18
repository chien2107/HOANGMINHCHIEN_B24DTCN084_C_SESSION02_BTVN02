#include <stdio.h>
#include <string.h>
 struct Student{
    int id;
    char name[50];
    int age;
    char phoneNumber[20];
};
int main() {
    struct Student sv[50] = {
        {1, "Nguyen Van A", 20, "0123456789"},
        {2, "Nguyen Van B", 21, "0987654321"},
        {3, "Nguyen Van C", 22, "0112233445"},
        {4, "Nguyen Van D", 19, "0223344556"},
        {5, "Nguyen Van E", 23, "0334455667"}
    };
    int size = 5; 
    printf("Danh sach sinh vien:\n");
    for (int i = 0; i < size; i++) {
    	printf("\nID %d:\n", sv[i].id);
        printf("Ten : %s\n", sv[i].name);
        printf("Tuoi : %d\n", sv[i].age);
        printf("So dien thoai : %s\n", sv[i].phoneNumber);      
    }
    int deleteId;
    printf("\nNhap ID sinh vien can xoa: ");
    scanf("%d", &deleteId);
    int found = 0;
    for (int i = 0 ; i < size ; i++) {
        if (sv[i].id == deleteId) {
            found = 1;
            sv[i] = sv[size - 1];
            size--; 
            break;
        }
    }
    if (found) {
        printf("Xoa sinh vien thanh cong.\n");
    } else {
        printf("Khong tim thay sinh vien\n");
    }
    printf("\nDanh sach sinh vien sau khi xoa:\n");
    if (size == 0) {
        printf("Danh sach sinh vien rong.\n");
    } else {
        for (int i = 0 ; i < size  ; i++) {
            printf("\nID %d:\n", sv[i].id);
        	printf("Ten : %s\n", sv[i].name);
        	printf("Tuoi : %d\n", sv[i].age);
        	printf("So dien thoai : %s\n", sv[i].phoneNumber); 
        }
    }
    return 0;
}

