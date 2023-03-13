#include <stdio.h>

int main(){
	
	int quantidade;
	float dvd, total;
	
	printf("Insira o valor do DVD: ");
	scanf("%f", &dvd);
	printf("Insira a quantidade de DVDs a serem comprados: ");
	scanf("%d", &quantidade);
	total = dvd * quantidade;
	printf("\nValor total da compra ficou em: %.2f", total);
	return 0;
	
}
