#include <stdio.h>
int main() {
    int number , x , start , end , found = -1;
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &number);
    int array[number];
    for (int i = 0; i < number; i++) {
    	printf("array[%d] = ",i);
        scanf("%d", &array[i]);
    }
    printf("Nhap so can tim: ");
    scanf("%d", &x);
 	start = 0;
 	end = number - 1;
    while (start <= end) {
        int mid = (start + end) / 2;
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
        printf("Phan tu %d duoc tim thay tai chi so %d.\n", x, found);
    } else {
        printf("Khong tim thay.\n");
    }
    return 0;
}

