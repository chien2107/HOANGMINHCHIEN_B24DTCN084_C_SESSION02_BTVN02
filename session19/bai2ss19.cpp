#include <stdio.h>
void countEvenOdd(int *array, int n, int *soChan, int *soLe);
int main() {
    int n;
    printf("Moi ban nhap so phan tu : ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++) {
    	printf("Phan tu array[%d] = ",i);
        scanf("%d", &array[i]);
    }
    int demSoChan, demSoLe;
    countEvenOdd(array, n, &demSoChan, &demSoLe);
    printf("So phan tu chan la : %d\n", demSoChan);
    printf("So phan tu le la : %d", demSoLe);
    return 0;
}
void countEvenOdd(int *array, int n, int *soChan, int *soLe) {
    *soChan = 0;
    *soLe = 0;
    for (int i = 0; i < n; i++){
    	if (*(array + i) % 2 == 0){
    		(*soChan)++;
		}else{
			(*soLe)++;
		}
	}
}

