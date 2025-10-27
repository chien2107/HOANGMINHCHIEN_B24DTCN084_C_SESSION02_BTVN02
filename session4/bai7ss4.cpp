#include <stdio.h>
int main() {
	int years;
	printf("moi ban nhap so nam ");
	scanf("%d",&years);
	if(years % 4 == 0 && years % 100 != 0){
		printf("day la nam nhuan");
	}else{
		printf("day la nam ko nhuan");
	}
    return 0;
}

