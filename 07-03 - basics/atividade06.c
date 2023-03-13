#include <stdio.h>

int main(){
	
	int x, y, auxiliar;
	
	printf("Insira o valor de X: ");
	scanf("%d", &x);
	printf("Insira o valor de Y: ");
	scanf("%d", &y);
	auxiliar = x;
	x = y;
	y = auxiliar;
	printf("Os valores de X e Y, respectivamente %d %d", x, y);
	return 0;
	
}
