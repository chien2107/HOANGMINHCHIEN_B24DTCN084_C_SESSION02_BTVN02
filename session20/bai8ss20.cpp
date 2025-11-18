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
    printf("Danh sach sinh vien hien tai:\n");
    for (int i = 0; i < size; i++) {
        printf("\nID %d:\n", sv[i].id);
        printf("Ten: %s\n", sv[i].name);
        printf("Tuoi: %d\n", sv[i].age);
        printf("So dien thoai: %s\n", sv[i].phoneNumber);
    }
    int viTri;
    printf("\nNhap vi tri can chen: ", size);
    scanf("%d", &viTri);
    if (viTri < 0 || viTri > size) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }
    Student newStudent;
    printf("Nhap ID: ");
    scanf("%d", &newStudent.id);
    getchar(); 
    printf("Nhap ten: ");
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    newStudent.name[strcspn(newStudent.name, "\n")] = 0;
    printf("Nhap tuoi: ");
    scanf("%d", &newStudent.age);
    getchar(); 
    printf("Nhap so dien thoai: ");
    fgets(newStudent.phoneNumber, sizeof(newStudent.phoneNumber), stdin);
    newStudent.phoneNumber[strcspn(newStudent.phoneNumber, "\n")] = 0;
    for (int i = size; i > viTri; i--) {
        sv[i] = sv[i - 1];
    }
    sv[viTri] = newStudent;
    size++; 
    printf("\nDanh sach sinh vien sau khi chen:\n");
    for (int i = 0; i < size; i++) {
        printf("\nID %d:\n", sv[i].id);
        printf("Ten: %s\n", sv[i].name);
        printf("Tuoi: %d\n", sv[i].age);
        printf("So dien thoai: %s\n", sv[i].phoneNumber);
    }
    return 0;
}


