#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int age;
    float grade;
};
void searchStudent(struct Student students[], int size, char targetName[]);
int main() {
    struct Student students[5];
    char searchName[50];
    for (int i = 0; i < 5; i++) {
        printf("Nhap thong tin cho hoc sinh thu %d:\n", i + 1);
        printf("Ten: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        printf("Tuoi: ");
        scanf("%d", &students[i].age);
        printf("Diem trung binh: ");
        scanf("%f", &students[i].grade);
        getchar();  
        printf("\n");
    }
    printf("Nhap ten hoc sinh can tim: ");
    fgets(searchName, sizeof(searchName), stdin);
    searchStudent(students, 5, searchName);
    return 0;
}
void searchStudent(struct Student students[], int size, char targetName[]) {
    for (int i = 0; i < size; i++) {
        if (strncmp(students[i].name, targetName, strlen(targetName)) == 0) {
            printf("\nHoc sinh duoc tim thay:\n");
            printf("Ten: %s", students[i].name);
            printf("Tuoi: %d\n", students[i].age);
            printf("Diem trung binh: %.2f\n", students[i].grade);
            return;
        }
    }
    printf("\nKhong tim thay hoc sinh voi ten nay!\n");
}

