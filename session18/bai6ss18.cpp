#include <stdio.h>
int main() {
    int array[] = {3 , 1 , 2 , 5 , 9 , 4};
    int size = sizeof(array) / sizeof(array[0]);
    int *ptrArray = array;
    for(int i = 0 ; i < size ; i++){
    	printf("%d ", *(ptrArray + i));
	}
	printf("\n");
    int value;
    printf("Moi ban nhap gia tri muon tim : ");
    scanf("%d",&value);
    int viTri = -1; 
    for (int i = 0 ; i < size ; i++) {
        if (*(ptrArray + i) == value) {
            viTri = i; 
            break;         
        }
    }
    if (viTri != -1) {
        printf("Gia tri %d tim thay tai vi tri %d\n", value , viTri);
    } else {
        printf("Khong tim thay gia tri %d trong mang.\n", value);
    }
    return 0;
}

