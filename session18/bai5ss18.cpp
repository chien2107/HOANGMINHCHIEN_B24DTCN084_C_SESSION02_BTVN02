#include <stdio.h>
int main() {
    int array[] = {2 , 1 , 4 , 3 , 5};
 	int size = sizeof(array) / sizeof(array[0]);
    int viTri = 0 , value;
    int *ptrArray = array;
    printf("Mang ban dau la : ");
    for(int i = 0 ; i < size ; i++){
    	printf("%d ", *(ptrArray + i));
	}
	printf("\n");
	printf("Moi ban nhap vi tri can thay doi : ");
	scanf("%d",&viTri);
	printf("Moi ban nhap gia tri can thay doi : ");
	scanf("%d",&value);
    *(ptrArray + viTri) = value;
    printf("Mang sau khi cap nhat : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(ptrArray + i));  
    }
    return 0;
}


