#include <stdio.h>
int main() {
	int array[5] = {1,2,3,4,5};
	int min , max;
	for(int i = 0 ; i < 5 ; i++){
		max = array[0];
		if(array[i] > max){
			max = array[i];
		}
		min = array[0];
		if(array[i] < min){
			min = array[i];
		}
	}
	printf("phan tu lon nhat trong mang la : %d\n",max);
	printf("phan tu nho nhat trong mang la : %d",min);
    return 0;
}

