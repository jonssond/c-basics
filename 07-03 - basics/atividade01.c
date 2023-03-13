#include <stdio.h>

int main(){
	
	float dvd, total;
	
	printf("Insira o valor do DVD: ");
	scanf("%f", &dvd);
	total = dvd * 3;
	printf("\nValor total da compra ficou em: %.2f", total);
	return 0;
	
}
