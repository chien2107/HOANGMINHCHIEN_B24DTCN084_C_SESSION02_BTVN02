#include <stdio.h>
int main() {
	char alphabet;
	printf("moi ban nhap chu cai : ");
	scanf(" %c",&alphabet);
	if(alphabet >= 'a' && alphabet <= 'z' ){
		printf("%c",alphabet - 32);
	}else if (alphabet >= 'A' && alphabet <= 'Z'){
		printf("%c",alphabet + 32);		
	}else{
		printf("khong phai chu cai");
	}
    return 0;
}

