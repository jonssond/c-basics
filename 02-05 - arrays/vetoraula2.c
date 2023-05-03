#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	int a[5] = {2, 1, 12, 5, 3};
	int b[5] = {3, 4, 2, 5, 6};
	int c[5];
	
	c[0] = a[0] + b[0];
	c[1] = a[1] + b[1];
	c[2] = a[2] + b[2];
	c[3] = a[3] + b[3];
	c[4] = a[4] + b[4];
	
	int i;
	for(i = 0; i < 5; i++){
		printf("C[%d] = %d\n", i, c[i]);
	}
	
	
	return 0;
}
