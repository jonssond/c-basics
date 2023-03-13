#include <stdio.h>

int main(){

	float valor1, valor2, valor3, valor4;
	float media;
	
	printf("Insira o valor do carro na primeira concessionaria: ");
	scanf("%f", &valor1);
	printf("Insira o valor do carro na segunda concessionaria: ");
	scanf("%f", &valor2);
	printf("Insira o valor do carro na terceira concessionaria: ");
	scanf("%f", &valor3);
	printf("Insira o valor do carro na quarta concessionaria: ");
	scanf("%f", &valor4);
	media = (valor1 + valor2 + valor3 + valor4) / 4;
	printf("Resultado da media do valor do carro: %.2f", media);
	return 0;
}
