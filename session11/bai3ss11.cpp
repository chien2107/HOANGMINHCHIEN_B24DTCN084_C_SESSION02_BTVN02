#include <stdio.h>
int main() {
    int array[] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10};
    int number = sizeof(array) / sizeof(array[0]);
    int x , mid;
    int start = 0, end = number - 1;
    int found = -1;
    for(int i = 0 ; i < number ; i++){
    	printf("%d ",array[i]);
	}
    printf("\nNhap phan tu can tim : ");
    scanf("%d", &x);
    while (start <= end) {
        mid = (start + end) / 2;

        if (array[mid] == x) {
            found = mid;
            break;
        } else if (array[mid] < x) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    if (found != -1) {
        printf("Phan tu %d duoc tim thay tai chi so %d", x, found);
    } else {
        printf("Khong tim thay phan tu %d trong mang", x);
    }
    return 0;
}

