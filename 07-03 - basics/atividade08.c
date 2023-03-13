#include <stdio.h>

int main(){
	
	int pesokg, pesog, consumo1, consumo2;
	int consumototal, resto;
	
	printf("Insira o peso do saco de ração (em kg): ");
	scanf("%d", &pesokg);
	pesog = pesokg * 1000;
	printf("Quantos gramas o primeiro gato consome por dia: ");
	scanf("%d", &consumo1);
	printf("Quantos gramas o segundo gato consome por dia: ");
	scanf("%d", &consumo2);
	consumototal = 5 * (consumo1 + consumo2);
	resto = pesog - consumototal;
	printf("O restante do saco de ração (em gramas) apos 5 dias sera de: %d", resto);
	return 0;
}
