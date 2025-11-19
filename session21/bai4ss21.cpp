#include <stdio.h>
struct Book {
    char title[100];
    char author[50];
    float price;
};
int main() {
    struct Book books[3];
    for (int i = 0; i < 3; i++) {
        printf("Nhap thong tin cho cuon sach thu %d:\n", i + 1);
        printf("Ten sach: ");
        fgets(books[i].title, sizeof(books[i].title), stdin);
        printf("Tac gia: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);
        printf("Gia: ");
        scanf("%f", &books[i].price);
        getchar(); 
        printf("\n");
    }
    printf("THONG TIN CAC CUON SACH\n");
    for (int i = 0; i < 3; i++) {
        printf("Cuon sach %d:\n", i + 1);
        printf("Ten sach: %s", books[i].title);
        printf("Tac gia: %s", books[i].author);
        printf("Gia: %.2f\n\n", books[i].price);
    }
    return 0;
}

