#include <stdio.h>
struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};
int main() {
    struct Student sv;
    sprintf(sv.name, "Hoang Minh Chien");
    sv.age = 19;
    sprintf(sv.phoneNumber, "0123456789");
    printf("Thong tin sinh vien:\n");
    printf("Name : %s\n", sv.name);
    printf("Age : %d\n", sv.age);
    printf("Phone Number : %s\n", sv.phoneNumber);
    return 0;
}


